#include <stdio.h>

int main(){
    int n,a=0;
    scanf("%d",&n);
    while (n!=0){
        n /= 2;
        a += 1;
    }
    printf("%d",a);
    return 0;
}