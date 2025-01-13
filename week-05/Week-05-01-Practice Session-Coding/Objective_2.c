#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    
    while (T--){
        int n;
        char startChar;
        scanf("%d %c",&n,&startChar);
        
        for (int i = 0; i < n;i++){
            for (int j = 0; j<n;j++){
                printf("%c",((i+j)%2==0)?startChar:(startChar=='W'?'B':'W'));
            }
            printf("\n");
        }
    }
    return 0;
}