#include <stdio.h>

int main(){
    char a;
    int b,c;
    scanf("%c%d%d",&a,&b,&c);
    if ((a == 'R') || (a == 'T'))
    printf("%d",b*c);
    else if (a == 'S')
    printf("%d",(b*c)/2);
    else
    printf("%d",0);
    
    return 0;
}