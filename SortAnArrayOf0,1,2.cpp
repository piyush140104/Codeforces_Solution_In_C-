// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here
        int count1=0;
        int count0=0;
        int count2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count0++;
            }
            else if(arr[i]==1)
            {
                count1++;
            }
            else if(arr[i]==2)
            {
                count2++;
            }
        }
        for(int j=0;j<count0;j++)
        {
            arr[j]=0;
        }
        for(int j=count0;j<count1+count0;j++)
        {
            arr[j]=1;
        }
        for(int j=count1+count0;j<n;j++)
        {
            arr[j]=2;
        }
    }
};