// https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1 
string isSubset(int arr1[], int arr2[], int n, int m) {
    unordered_map<int,int> mpp1;
    unordered_map<int,int> mpp2;
    string flag="No";
    for(int i=0;i<n;i++)
    {
        mpp1[arr1[i]]=mpp1[arr1[i]]+1;
    }
    for(int i=0;i<m;i++)
    {
        mpp2[arr2[i]]=mpp2[arr2[i]]+1;
    }
        if(n>=m)
        {
        for(int j=0;j<m;j++)
        {
            if(mpp2[arr2[j]]<=mpp1[arr2[j]])
            {
                flag="Yes";
            }
            else
            {
                flag="No";
                break; 
            }
        }
        }
        return flag;
}