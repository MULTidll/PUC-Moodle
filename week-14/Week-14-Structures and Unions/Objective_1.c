#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i = 0;i < n;i++){
        int length,width,height;
        scanf("%d %d %d",&length,&width,&height);
        if(height < 41){
            int volume = length * width * height;
            printf("%d\n",volume);
        }
    }
    return 0;
}