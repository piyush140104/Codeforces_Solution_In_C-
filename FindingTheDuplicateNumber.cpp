// https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        auto maxxx=max_element(nums.begin(),nums.end());
        int maxi = *maxxx;
        int ans=0;
        vector<int> hash(maxi + 1, 0);
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]-1]=hash[nums[i]-1]+1;
        }
        for(int j=0;j<nums.size();j++)
        {
            if(hash[nums[j]-1]>1)
            {
                ans=nums[j];
                break;
            }
        }
        return ans;
    }
};