// https://www.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1
class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
    int count=0;
        int badvalues=0;
        int ans=INT_MAX;
        int counti=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                counti++;
            }
        }
        for(int j=0;j<counti;j++)
        {
            if(arr[j]>k)
            {
                badvalues++;
            }
        }
        ans=badvalues;
        for(int w=0,g=counti;w<=n-counti && g<n;)
        {
            if(arr[w]>k)
            {
               badvalues--;
            }
            if(arr[g]>k)
            {
               badvalues++;
            }
            w++;
            g++;
            ans=min(ans,badvalues);
        }
        return ans;
    }
};