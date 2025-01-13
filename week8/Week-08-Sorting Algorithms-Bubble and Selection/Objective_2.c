#include <stdio.h>
int main(){
    int n,min1,min2,temp,flag = 1;
    scanf("%d",&n);
    int vac[n],pat[n];
    for(int i = 0;i<n;i++)
    scanf("%d",&vac[i]);
    for(int i=0;i<n;i++)
    scanf("%d",&pat[i]);
    for(int j = 0; j<n-1;j++){
        min1=j,min2=j;
        for(int k=j;k<n;k++){
            if(vac[k]<vac[min1])
            min1 = k;
            if(pat[k]<pat[min2])
            min2 = k;
        }
        temp = vac[min1];
        vac[min1] = vac[j];
        vac[j] = temp;
        
        temp = pat[min2];
        pat[min2] = pat[j];
        pat[j] = temp;
    }
    for(int i = 0;i < n;i++){
        if(vac[i]<=pat[i]){
            flag = 0;break;
        }
    }
    if(flag == 1)
    printf("Yes");
    else
    printf("No");
}