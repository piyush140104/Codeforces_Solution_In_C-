// https://www.geeksforgeeks.org/problems/three-way-partitioning/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
class Solution{   
public:
    void threeWayPartition(vector<int>& array,int a, int b)
    {
       int i=0;
       int start=0;
       int end=array.size()-1;
       while(i<=end)
       {
           if(array[i]<a)
           {
               swap(array[i],array[start]);
               i++;
               start++;
           }
           else if(array[i]>b)
           {
               swap(array[i],array[end]);
               end--;
           }
           else if(array[i]>=a && array[i]<=b)
           {
               i++;
           }
       }
    }
};