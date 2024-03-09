// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long int maxi=INT_MIN;
        long long int sum=0;
        long long int start=-1;
        long long int ansstart=-1;
        long long int ansend=-1;
        for(int i=0;i<n;i++)
        {
            if(sum==0)
            {
                start=i;
            }
            sum=sum+arr[i];
            if(sum>maxi)
            {
                maxi=sum;
                ansstart=start;
                ansend=i;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;        
    }
};