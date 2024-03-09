// https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int,int> mpp;
        int sum=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            sum +=arr[i];
            if(sum==0)
            {
                flag=true;
                break;
            }
            else
            {
                if(mpp.find(sum)!=mpp.end())
                {
                    flag=true;
                    break;
                }
                else
                {
                    mpp[sum]=i;
                    flag=false;
                }
            }
        }
        if(flag==false)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};