#include <stdio.h>

int main(){
    int n,b=0;
    while (scanf("%d",&n) == 1){
        (n%2 != 0)? b++ : 0;
    }
    printf("%d",b);
    return 0;
}