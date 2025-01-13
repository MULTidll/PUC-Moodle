#include <stdio.h>

int main(){
    int stones;
    int pick;
    int turn = 0;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n;i++){
        turn = 0;
        scanf("%d",&stones);
        while (stones>0){
            pick = (stones >= 4) ? 4:1;
            stones -= pick;
            turn = !turn;
        }
        printf("%s\n",turn ? "Yes" : "No");
    }
    return 0;
}