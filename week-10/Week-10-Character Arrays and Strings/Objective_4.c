#include <stdio.h>
#include <string.h>

int main(){
    char a[101], b[101];
    scanf("%s",a);
    scanf("%s",b);
    printf("%lu %lu\n",strlen(a),strlen(b));
    printf("%s%s\n",a,b);
    
    char temp;
    if(strlen(a) > 0 && strlen(b) > 0){
        temp = a[0];
        a[0] = b[0];
        b[0] = temp;
    }
    printf("%s %s\n",a,b);
    return 0;
}