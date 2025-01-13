#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,d,min,temp;
        scanf("%d %d",&n,&m);
        d = n-m;
        int arr[n];
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(int j=0;j<n;j++){
            min = j;
            for(int k=j;k<n;k++){
                if(arr[k]<arr[min])
                min = k;
            }
            temp = arr[min];
            arr[min] = arr[j];
            arr[j] = temp;
        }
        int maxsum = 0,minsum = 0;
        for(int a=0;a<d;a++){
            minsum += arr[a];
        }
        for(int b = n - 1;b > m-1;b--)
        maxsum += arr[b];
        printf("%d\n",maxsum - minsum);
    }
}