#include <stdio.h>

int leap(int year){
    if ((year%4 == 0 && year%100 != 0) || (year%400 == 0)){
     return 1;
    }
    else
    return 0;
}

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int days[] = {31,28+leap(c),31,30,31,30,31,31,30,31,30,31};
    for (int i = 0;i<b-1;++i){
        a += days[i];
    }
    printf("%d",a);
    return 0;
}