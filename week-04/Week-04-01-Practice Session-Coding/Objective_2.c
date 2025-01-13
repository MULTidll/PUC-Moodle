#include <stdio.h>

int main(){
    int a,b, c = 0;
    scanf("%d",&a);
    while (a>0){
        b = a%10;
        (b==0||b==6||b==9||b==4) ? c+=1 :(b==8) ? c+=2 : 0;
        a /= 10;
    }
    printf("%d",c);
    return 0;
}