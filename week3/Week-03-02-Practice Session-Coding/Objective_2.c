#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    a = (a%12+12)%12;
    switch(a){
        case 0:printf("Monkey");
        break;
        case 1:printf("Rooster");
        break;
        case 2:printf("Dog");
        break;
        case 3:printf("Pig");
        break;
        case 4:printf("Rat");
        break;
        case 5:printf("Ox");
        break;
        case 6:printf("Tiger");
        break;
        case 7:printf("Hare");
        break;
        case 8:printf("Dragon");
        break;
        case 9:printf("Snake");
        break;
        case 10:printf("Horse");
        break;
        case 11:printf("Sheep");
        break;
    }
    return 0;
}
 