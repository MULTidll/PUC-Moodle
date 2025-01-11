#include <stdio.h>

int main(){
    int T,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for (int i = 0;i<n;i++){
            for(int j = 0; j<n;j++){
                ((i+j)%2==0)?printf("W"):printf("B");
            
            }
            printf("\n");
        }
    }
    return 0;
}