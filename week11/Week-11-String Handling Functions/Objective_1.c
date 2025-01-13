#include <stdio.h>
#include <string.h>

int main(){
    char A[1000001], B[1000001];
    scanf("%s",A);
    scanf("%s",B);
    
    if(strlen(A) != strlen(B)){
        printf("NO\n");
        return 0;
    }
    
    int n = strlen(A);
    int shift = (B[0] - A[0] + 26) % 26;
    
    for(int i = 1; i < n; i++){
        int currentShift = (B[i] - A[i]+26)%26;
        
        if(currentShift != shift){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}