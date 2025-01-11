#include <stdio.h>

int main(){
    int n,a,b=1;
    scanf("%d",&n);
    while (n!=0 && b==1){
        a = n%10;
        n /= 10;
        ( a == 2 || a == 3 || a == 4 || a == 7) ? b++ :0;
    }
    (b==1) ? printf("true") : printf("false");
    return 0;
}