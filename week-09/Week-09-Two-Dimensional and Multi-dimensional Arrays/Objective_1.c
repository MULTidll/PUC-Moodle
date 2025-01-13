#include <stdio.h>

int main(){
    int m[3][3];
    int set1_sum = 0, set2_sum = 0;
    
    for (int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            scanf("%d",&m[i][j]);
        }
    }
    
    set1_sum = m[0][0] + m[0][2] + m[1][1] + m[2][0] + m[2][2];
    set2_sum = m[0][1] + m[1][0] + m[1][2] + m[2][1];
    
    printf("%d\n",set1_sum);
    printf("%d\n",set2_sum);
    return 0;
    
}