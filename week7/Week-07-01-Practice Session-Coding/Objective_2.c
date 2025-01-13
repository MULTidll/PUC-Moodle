#include<stdio.h>
int main(){
    int n,m,c,c1=0,co;
    scanf("%d",&n);
    int arr[n];
    for(int a=0;a<n;a++){
        scanf("%d",&arr[a]);
    }
    scanf("%d",&m);
    int brr[m],ans[m];
    for(int b=0;b<m;b++){
        scanf("%d",&brr[b]);
    }
    for(int j=0;j<m;j++)
    {
        c=0;
        for(int i=0;i<n;i++){
            if(arr[i]==brr[j]){
                c=1;
                arr[i]=-1;
                break;
            }
        }
        if(c==0){
            ans[c1]=brr[j];
            c1++;
        }
    }
    for(int a=0;a<c1;a++){
        co=0;
        for(int b=0;b<c1;b++){
            if(ans[b]<ans[a])
            co++;
        }
        int temp=ans[a];
        ans[a]=ans[co];
        ans[co]=temp;
    }
    for(int i=0;i<c1;i++)
    printf("%d ",ans[i]);

return 0;

}