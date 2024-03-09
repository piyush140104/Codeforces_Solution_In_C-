// https://www.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1
class Solution {
  public:
    string longestPalin (string S) {
        int low=0;
        int maxlength=0;
        int maxii=0;
        string newstr;
        int start=0;
        int end=0;
        int high=0;
        for(int i=0;i<S.size();i++)
        {
            low=i;
            high=S.size()-1;
            int charcount=0;
            int majorhigh=high;    
            while(high>=low)
            {
                if(low!=high && S[low]==S[high])
                {
                  low++;
                  high--;
                  charcount+=2;
                }
                else if(low==high && S[low]==S[high])
                {
                    low++;
                    high--;
                    charcount+=1;
                    break;
                }
                else if(S[low]!=S[high])
                {
                    high=majorhigh-1;
                    majorhigh--;
                    low=i;
                
                    charcount=0;
                }
            }
              if(maxlength<charcount)
              {
                start=i;
                end=i+charcount-1;
              }
           maxlength=max(maxlength,charcount);
        }
        return S.substr(start,maxlength);
    }
};