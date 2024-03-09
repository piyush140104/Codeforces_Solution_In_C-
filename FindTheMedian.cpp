// https://www.geeksforgeeks.org/problems/find-the-median0527/1
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int z=v.size();
		    if(z%2==0)
		    {
		        return (v[z/2]+v[z/2-1])/2;
		    }
		    else
		    {
		        return v[z/2];
		    }
		}
};