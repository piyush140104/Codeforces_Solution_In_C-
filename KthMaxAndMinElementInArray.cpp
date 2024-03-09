//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+r+1);
        return arr[k-1];
    }
//you can find maximum by using below code
    int kthlargest(int arr[], int l, int r, int k)
    {
        sort(arr,arr+r+1);
        return arr[r+1-k];
    }
};