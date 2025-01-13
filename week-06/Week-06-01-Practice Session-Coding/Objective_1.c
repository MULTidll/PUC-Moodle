#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int k;
        scanf("%d",&k);
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]-a[j]==k || a[j] - a[i]==k){flag=1;break;}
            }
        if(flag)break;}
        printf("%d\n",flag);
    }
}