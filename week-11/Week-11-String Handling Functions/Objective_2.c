#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d",&N);
    char passwords[100][14];
    int i;
    
    for(i = 0;i < N;i++){
        scanf("%s",passwords[i]);
    }
    for(i = 0; i < N; i++){
        char reversed[14];
        int len = strlen(passwords[i]);
        
        for(int j = 0; j < len; j++){
            reversed[j] = passwords[i][len - 1 - j];
        }
        reversed[len] = '\0';
        
        for(int j = i+1;j < N;j++){
            if(strcmp(reversed,passwords[j]) == 0 && i != j){
                printf("%d %c\n",len,passwords[i][len/2]);
            }
        }
    }
    return 0;
}