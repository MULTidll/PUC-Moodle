#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n>=2){
        printf("%d",(n*(n-1))/2);
    }
    else{
        printf("%d",0);
    }
}