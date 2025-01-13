#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        char S[101];
        scanf("%s",S);
        int len = strlen(S);
        
        if(len == 10 && S[0] != '0'){
            int valid = 1;
            for(int i = 0; i < len;i++){
                if(!isdigit(S[i])){
                    valid = 0;
                    break;
                }
            }
            if(valid)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else
        printf("NO\n");
    }
    return 0;
}