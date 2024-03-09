// https://www.geeksforgeeks.org/problems/search-pattern-rabin-karp-algorithm--141631/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
//M-1
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int> vrr={0};
            vrr.resize(txt.size());
            size_t position = txt.find(pat);
            while(position!=string::npos)
            {
                vrr.push_back(position+1);
                position=txt.find(pat,position+1);
            }
           
            vrr.erase(std::remove(vrr.begin(), vrr.end(), 0), vrr.end());
            if(vrr.empty())
            {
             vrr.push_back(-1);
            }
            return vrr;
        }
};