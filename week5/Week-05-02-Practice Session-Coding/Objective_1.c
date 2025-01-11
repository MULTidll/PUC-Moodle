#include <stdio.h>
#include <math.h>

int isArmstrong(int num){
    int originalNum = num;
    int sum = 0,digit,numDigits=0;
    
    int temp = num;
    while(temp!=0){
     numDigits++;
     temp /= 10;
    }
    temp = num;
    while(temp != 0){
        digit = temp % 10;
        sum += pow(digit,numDigits);
        temp /= 10;
    }
    return sum == originalNum;
}

int main(){
    int number;
    scanf("%d",&number);
    
    if(isArmstrong(number))
    printf("true");
    else
    printf("false");
    
    return 0;
}