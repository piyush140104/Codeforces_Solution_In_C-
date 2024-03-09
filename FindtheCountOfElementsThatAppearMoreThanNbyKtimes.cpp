// https://www.geeksforgeeks.org/problems/count-element-occurences/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int,int> mpp;
        int count=0;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]=mpp[arr[i]]+1;
        }
        for (auto it = mpp.begin(); it != mpp.end(); ++it) {
        if((it->second)>n/k)
        {
             count++;
        }
    }
    return count;
    }
};