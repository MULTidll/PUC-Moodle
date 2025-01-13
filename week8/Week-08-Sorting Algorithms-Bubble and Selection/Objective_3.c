#include <stdio.h>

int main(){
    int n,count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i = 0;i < n-1;i++){
        for(int j = i+1;j<n;j++){
            if((arr[i]^arr[j]) == 0)
            count++;
        }
    }
    printf("%d",count);
}