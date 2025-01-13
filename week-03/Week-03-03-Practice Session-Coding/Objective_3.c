#include <stdio.h>

int main(){
    const char *name[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday",
    "Friday","Saturday","Kryptonday","Coluday","Daxamday"};
    int n;
    scanf("%d",&n);
    int a = (n-1)%296+1;
    printf("%s",name[a%10]);
    return 0;
}