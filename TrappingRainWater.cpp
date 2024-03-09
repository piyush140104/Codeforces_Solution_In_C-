// https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
class Solution{
   public:
   long long trappingWater(int height[],int size){
    int prefixarr[size]={0};
    int suffixarr[size]={0};
    int rightmax=0;
    int leftmax=0;
    for(int i=0;i<size;i++)
    {
        leftmax=max(leftmax,height[i]);
        prefixarr[i]=leftmax;
    }
    for(int j=size-1;j>=0;j--)
    {
        rightmax=max(rightmax,height[j]);
        suffixarr[j]=rightmax;
    }
    long long int reswater=0;
    for(int index=0;index<size;index++)
    {
     reswater=reswater+min(prefixarr[index],suffixarr[index])-height[index];
    }
    return reswater;   
    }
};