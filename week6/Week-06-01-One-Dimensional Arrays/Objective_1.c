#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int a=0;a<=n-k;a++)
    {
        int max=arr[a];
        for(int b=a;b<a+k;b++)
        {
            if(arr[b]>max)
            {
                max=arr[b];
            }
        }
        printf("%d ",max);
    }
}