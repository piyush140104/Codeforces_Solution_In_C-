// https://www.geeksforgeeks.org/problems/common-elements1132/1
class Solution
{
    public:    
       vector <int> commonElements (int arr[], int brr[], int crr[], int n1, int n2, int n3)
        {
            vector<int> common;
            set<int> s1(arr,arr+n1);
            set<int> s2(brr,brr+n2);
            set<int> s3(crr,crr+n3);//code here.
            unordered_map<int,int> mpp;
            for (const auto& element : s1)
            {
                mpp[element]++;
            }
            for (const auto& element : s2)
            {
                mpp[element]++;
            }
            for (const auto& element : s3)
            {
                mpp[element]++;
            if(mpp[element]==3)
            {
                common.push_back(element);
            }
            }
            return common;
        }

};