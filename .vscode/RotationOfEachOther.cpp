// https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
class Solution
{
    public:
    bool areRotations(string s1,string s2)
    {
        string s;
        s=s1+s1;
        if(s.find(s2)!=string::npos)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};