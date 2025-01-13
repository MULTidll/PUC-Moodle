#include <stdio.h>

#define MAX_SIZE 1001

int main(){
    int i,j,n,x1,y1,x2,y2,t= 0;
    long long total = 0;
    int arr[MAX_SIZE][MAX_SIZE] = {0};
    scanf("%d",&n);
    while(n -- ){
        scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&t);
        
        for(i = x1; i <= x2; i++){
            for(j = y1; j <= y2; j++){
                if(arr[i][j] == 0)
                arr[i][j] += t;
                else if(arr[i][j] > 0)
                arr[i][j] = (-1) * (arr[i][j] + t);
                else if(arr[i][j] < 0)
                arr[i][j] -= t;
            }
        }
    }
    for(i = 1; i < MAX_SIZE;i++){
        for(j = 1;j < MAX_SIZE;j++){
            if(arr[i][j] < 0){
                total += arr[i][j];
            }
        }
    }
    printf("%lld\n",(-1)*total);
    return 0;
}