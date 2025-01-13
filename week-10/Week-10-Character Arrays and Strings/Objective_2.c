#include <stdio.h>
#include <string.h>

int is_in(char ch,const char *set){
    return strchr(set,ch) != NULL;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char str[100000];
        int count = 0;
        scanf("%s",str);
        for(int i = 0;str[i] != '\0';i++){
            char c = str[i];
            if(is_in(c,"aeiouAEIOU"))
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}