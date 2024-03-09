// https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
class Solution{
    public:
    bool find3Numbers(int arr[], int n, int target)
    {
        bool flag=false;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            int low=i+1;int high=n-1;
            while(low<high)
            {
                int current=arr[i]+arr[low]+arr[high];
                if(current==target)
                {
                    flag=true;
                    break;
                }
                else if(current<target)
                {
                    flag=false;
                    low++;
                }
                else if(current>target)
                {
                    flag=false;
                    high--;
                }
            }
            if(flag==true)
            {
                break;
            }
            else
            {
                flag=flag;
            }
        }
        return flag;
    }