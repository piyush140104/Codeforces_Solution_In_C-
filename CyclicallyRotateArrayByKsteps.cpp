void rotate(int arr[], int n,int k)
{
//we use the concept that if a number x is divided by y then
//remainder is from 0 to y-1 both inclusive
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int z=(i+k)%n;
        temp[z]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}