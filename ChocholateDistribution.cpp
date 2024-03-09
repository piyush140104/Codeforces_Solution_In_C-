https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(), a.end());
    long long int j=0;
    long long int res=LONG_LONG_MAX;
    while(j<=n-m)
    {
        res=min(res,a[j+m-1]-a[j]);
        j++;
    }
    return res;
}
};