#include <stdio.h>

int main(){
    int a;
    long int b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c", &a,&b,&c);
    scanf("%f %lf",&d,&e);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",a,b,c,d,e);
    return 0;
}