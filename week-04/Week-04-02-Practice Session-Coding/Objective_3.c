#include <stdio.h>

int main(){
    long long n,t,i,nut = 0;
    scanf("%lld %lld",&n,&t);
    for(i=1;i<=n;i++){
        nut += i;
        (nut == t) ? nut-=1 : 0;
    }
    printf("%lld",nut%1000000007);
    return 0;
}