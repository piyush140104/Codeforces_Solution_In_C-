//https://www.geeksforgeeks.org/problems/reverse-a-string/1
class Solution
{
    public:
    string reverseWord(string str)
    {
        string s;
        for(int i=str.size()-1;i>=0;i--)
        {
            s += str[i];
        }
        return s;
    }
};