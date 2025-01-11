#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a == 3)
    printf("Triangle");
    else if (a == 4)
    printf("Square");
    else if (a == 5)
    printf("Pentagon");
    else if (a == 6)
    printf("Hexagon");
    else if (a == 7)
    printf("Heptagon");
    else if (a == 8)
    printf("Octagon");
    else if (a == 9)
    printf("Nonagon");
    else if (a == 10)
    printf("Decagon");
    else
    printf("The number of sides is not supported.");
    return 0;
}