#include<stdio.h>
int main(){
    int t,m,n,c=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        c=0;
        scanf("%d\n%d",&m,&n);
        int arr[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        for(int a=0;a<n-1;a++){
            for(int b=a+1;b<n;b++){
                if(arr[a]+arr[b]==m){
                    printf("%d %d\n",a+1,b+1);
                    c=1;break;
                }
            } if(c==1) break;
        }
    }
return 0;}