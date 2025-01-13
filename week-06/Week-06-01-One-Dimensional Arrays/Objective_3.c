#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int arr1[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr1[i]);
        
    }
    scanf("%d",&b);
    int arr2[b];
    for(int i=0;i<b;i++){
        scanf("%d",&arr2[i]);
    }
    int p=0,q=0;
    while(p<a&&q<b){
        if(arr1[p]<arr2[q]){
            printf("%d ",arr1[p]);
            p++;
        }else if(arr1[p]>arr2[q]){
            printf("%d ",arr2[q]);
            q++;
        }else{//elements are equal
          printf("%d ",arr1[p]);
          p++;
          q++;
        }
    }
    while(p<a){
        printf("%d ",arr1[p]);
        p++;
    }
    while(q<b){
        printf("%d ",arr2[q]);
        q++;
    }
    printf("\n");
    return 0;
}
    