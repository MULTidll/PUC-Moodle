#include<stdio.h>
int main()
{
    int n,t,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(int j=0;j<n;j++)
    {
        while(arr[j]>0)
        {
            arr[j]-=t;
            count++;
        }
    }
    printf("%d",count);
}