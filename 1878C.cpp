// problem link: https://codeforces.com/problemset/problem/1878/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,k,x;
        cin>>n>>k>>x;
        long long int minsum=k*(k+1);
        long long int maxsum=k*(2*n-k+1);
        if(x*2>=minsum && x*2<=maxsum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}