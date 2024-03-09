// https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1
#include<cmath>
class Solution {
public:
    int PalinArray(int arr[], int size)
    {
      long long int count2=0;// code here
       for(int i=0;i<size;i++)
       {
        int count=0;
    	int res=arr[i];
    	while(res>0)
    	{
    	    count++;
    	    res=res/10;
    	}
        int res2=arr[i]%10;
        int res3=arr[i]/10;
        int sum=0;
        double y=0;
    	for(int w=1;w<=count;w++)
    	{
    	    y=(res2)*(pow(10,count-w));
    	    sum=sum+y;
            res2=res3%10;
            res3=res3/10;  
    	}
        if(sum==arr[i])
    	{
    	    count2++;
    	}
        }
    	if(count2==size)
    	{
    	    return 1;
    	}
        else{
            return 0;
        }
     }
};