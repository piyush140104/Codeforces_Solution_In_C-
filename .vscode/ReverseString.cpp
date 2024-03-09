// https://leetcode.com/problems/reverse-string/
class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()%2==0)
        {
            for(int i=0;i<=(s.size()/2)-1;i++)
            {
                swap(s[i],s[s.size()-i-1]);
            }
        }
        else
        {
            for(int i=0;i<s.size()/2;i++)
            {
                swap(s[i],s[s.size()-i-1]);
            }
        }
    }
};