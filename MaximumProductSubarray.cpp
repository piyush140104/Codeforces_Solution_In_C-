// https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/1
class Solution{
public:
	long long maxProduct(vector<int> arr, int n) {
	    long long int prefix=1;
	    long long int suffix=1;
	    long long int maxi=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(prefix==0)
	        {
	            prefix=1;
	        }
	        if(suffix==0)
	        {
	            suffix=1;
	        }
	        prefix=prefix*arr[i];
	        suffix=suffix*arr[n-i-1];
	        maxi=max(maxi,max(prefix,suffix));
	    }	
	    return maxi;
	}
};