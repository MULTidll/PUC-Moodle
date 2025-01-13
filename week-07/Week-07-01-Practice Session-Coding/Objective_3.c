#include<stdio.h>
int main(){
    int t,n,Is,rs,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        Is=0;
        rs=0;
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++)
         scanf("%d",&arr[j]);
    m=n/2;
    if(arr[m]==0){
        for(m=0;arr[m]==0 && m<n;m++);
    }
    for(int j=0;j<=m;j++)
    Is=Is+arr[j];
    for(int j=m;j<n;j++)
    rs=rs+arr[j];
    printf("%s\n",(Is==rs)?"YES":"NO");
    
    }
    return 0;
}