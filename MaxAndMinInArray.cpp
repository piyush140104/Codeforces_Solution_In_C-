//https://www.geeksforgeeks.org/problems/max-min/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
class Solution
{
   public:
    int findSum(int arr[], int N)
    {
        int max=arr[0];
        int min=arr[0];
    	for(int i=0;i<N;i++)
    	{
    	    if(max<arr[i])
    	    {
    	       max=arr[i];
    	    }
    	    if(min>arr[i])
    	    {
    	       min=arr[i];
    	    }
    	}
    	return max+min;
    }
};