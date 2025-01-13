#include <stdio.h>

int main(){
    char a;int b;
    scanf("%c%d",&a,&b);
    int c=a-'a'+1;
    c=c+b;
    if(c&1)
    printf("The square is white.");
    else
    printf("The square is black.");
    return 0;
}