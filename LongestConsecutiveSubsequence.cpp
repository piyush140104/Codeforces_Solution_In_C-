// https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N)
    {
        int maxii=arr[0];
        
      for(int i=0;i<N;i++)
      {
          if(maxii<arr[i])
          {
              maxii=arr[i];
          }
      }
      bool hash[maxii]={false};
      for(int i=0;i<N;i++)
      {
         hash[arr[i]]=true;
      }
      int count=0;
      int maxi=0;
      for(int i=0;i<=maxii;i++)
      {
        if(hash[i]==hash[i-1] && hash[i]==true && i!=0)
        {
            count++;
            maxi=max(maxi,count);
        }
        else
        {
            count=0;
            maxi=max(maxi,count);
        }
      }
      return maxi+1;    
    }
};