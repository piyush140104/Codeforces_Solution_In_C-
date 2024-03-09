// https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int n=x.size();
        stack<char> sta;
        bool ans=true;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='{' || x[i]=='[' || x[i]=='(')
            {
                sta.push(x[i]);
            }
            else if(x[i]=='}')
            {
                if(!sta.empty() && sta.top()=='{')
                {
                    sta.pop();
                }
                else
                {
                    ans=false;
                    break;
                }
            }
            else if(x[i]==']')
            {
                if(!sta.empty() && sta.top()=='[')
                {
                    sta.pop();
                }
                else
                {
                    ans=false;
                    break;
                }
            }
            else if(x[i]==')')
            {
                if(!sta.empty() && sta.top()=='(')
                {
                    sta.pop();
                }
                else
                {
                    ans=false;
                    break;
                }
            }
        }
        if(!sta.empty())
        {
            return false;
        }
        else
        {
            return ans;
        }
    }
};