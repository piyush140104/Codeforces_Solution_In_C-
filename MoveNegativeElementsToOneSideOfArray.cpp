// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                count++;
            }
        }
        int posarr[n-count];
        int negarr[count];
        for(int i=0,j=0,w=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                negarr[j]=arr[i];
                j++;
            }
            else if(arr[i]>=0)
            {
                posarr[w]=arr[i];
                w++;
            }
        }
        for(int w=0;w<n;w++)
        {
            if(w<n-count)
            {
                arr[w]=posarr[w];
            }
            else if(w>=n-count)
            {
                arr[w]=negarr[w-(n-count)];
            }
        }
    }
};