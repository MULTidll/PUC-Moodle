#include <stdio.h>

long long revNum(long long num){
    long long rev = 0;
    while(num>0){
        rev=rev*10+(num%10);
        num /= 10;
    }
    return rev;
}

int main(){
    long long num;
    scanf("%lld",&num);
    do{
        num += revNum(num);
    }
    while(num != revNum(num));
    printf("%lld\n",num);
    return 0;
}