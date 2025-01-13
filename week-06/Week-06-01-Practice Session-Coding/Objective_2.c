#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        for(int i=0;i<=n;i++){
            if(i%2!=0) c=c+i;
        }printf("%d\n",c);
    }

}