// https://www.geeksforgeeks.org/problems/next-permutation5226/1
//Method-1 
class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        next_permutation(arr.begin(),arr.end()); 
        return arr;
    }
};