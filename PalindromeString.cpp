// https://www.geeksforgeeks.org/problems/palindrome-string0817/1
class Solution{
public:	
	int isPalindrome(string S)
	{
	    int count=0;
	    for(int i=0;i<S.size()/2;i++)
	    {
	       if(S[i]==S[S.size()-1-i])
	       {
	            count++;
	       }
	    }
	    if(count==S.size()/2)
	    {
	        return 1;
	    }
	    else
	    {
	        return 0;
	    }
	}
};