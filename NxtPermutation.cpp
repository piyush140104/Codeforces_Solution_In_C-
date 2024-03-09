// https://www.geeksforgeeks.org/problems/next-permutation5226/1
//Method-2
class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
    int index=-1;
    for(int i=N-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            index=i;
            break;
        }
    }
    if(index==-1)
    {
        reverse(arr.begin(),arr.end());
        return arr;
    }
    else
    {
    for(int i=N-1;i>index;i--)
    {
        if(arr[i]>arr[index])
        {
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    }
    return arr;
}
};