#include<stdio.h>
int main()
{
    int s1,s2,ans;
    scanf("%d",&s1);
    int ta[s1];
    for(int i=0;i<s1;i++)
    scanf("%d",&ta[i]);
    scanf("%d",&s2);
    int tb[s2];
    for(int i=0;i<s2;i++)
    scanf("%d",&tb[i]);
    for(int j=0;j<s2;j++)
    {
        ans=0;
        for(int i=0;i<s1;i++){
            if(tb[j]>=ta[i])
            ans++;
        }printf("%d\n",ans);
    }
}