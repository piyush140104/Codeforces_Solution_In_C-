// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
#include <vector>
class Solution {
public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(std::vector<long long int> &arr, long long int low, long long int mid, long long int high) {
        long long int count = 0;
        std::vector<long long int> temp;
        long long int left = low;
        long long int right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                count += (mid - left + 1);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        for (long long int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }

        return count;
    }

    // Recursion Part
    long long int mergesort(std::vector<long long int> &arr, long long int low, long long int high) {
        long long int count = 0;
        if (low < high) {
            long long int mid = (low + high) / 2;
            count += mergesort(arr, low, mid);      // left half
            count += mergesort(arr, mid + 1, high); // Right half
            count += merge(arr, low, mid, high);    // merging sorted halves
        }
        // divide vale cases bhi counted
        // phir merging vale cases bhi counted
        return count;
    }

    long long int inversionCount(long long arr[], long long n) {
        std::vector<long long int> arrVec(arr, arr + n);
        return mergesort(arrVec, 0, n - 1);
    }
};