// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
void rotate(int arr[], int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int z=(i+1)%n;
        temp[z]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}