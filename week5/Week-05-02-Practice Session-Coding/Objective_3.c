#include <stdio.h>
int main(){
    int n=0,count=0,e,temp;
    scanf("%d",&e);
    while(count < e){
        n++;
        temp = n;
        while(temp > 0 && (temp%10==3 || temp % 10 == 4)){
            temp /=10;
            
        }
        if (temp == 0) count++;
    }
    printf("%d",n);
    return 0;
}