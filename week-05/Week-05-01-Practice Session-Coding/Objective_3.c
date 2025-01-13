#include <stdio.h>
#include <string.h>

int sum(int n){
    return n*(n-1)/2;
}

void pattern(int N){
    int Val=0,Pthree=0,cnt=0,initial=-1;
    char s[100] = "**";
    
    for(int i = 0;i < N;i++){
        cnt = 0;
        
        if(i>0){
            printf("%s",s);
            strcat(s,"**");
        
        }
        for (int j = i;j<N;j++){
            if(i>0){
                cnt+=1;
            }
            Val += 1;
            printf("%d0",Val);
        }
        if(i==0){
            int Sumbeforelast = sum(Val)*2;
            Pthree = Val + Sumbeforelast + 1;
            initial = Pthree;
        }
        initial = initial - cnt;
        Pthree = initial;
        
        for(int k =i;k<N;k++){
            printf("%d",Pthree);
            Pthree += 1;
            if (k != N-1)
            printf("0");
        }
        printf("\n");
    }
}

int main(){
    int T,N;
    scanf("%d",&T);
    for(int i = 1;i<=T;i++){
        scanf("%d",&N);
        printf("Case #%d\n",i);
        pattern(N);
    }
    return 0;
}