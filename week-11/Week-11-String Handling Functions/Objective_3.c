#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d",&N);
    char bestRestaurant[21];
    int maxPoints = -1;
    
    for(int i = 0;i < N;i++){
        char restaurantName[21];
        int points;
        
        scanf("%s %d",restaurantName,&points);
        
        if(points > maxPoints || (points == maxPoints && strcmp(restaurantName, bestRestaurant) < 0)){
            maxPoints = points;
            strcpy(bestRestaurant,restaurantName);
        }
    }
    printf("%s\n",bestRestaurant);
    return 0;
}