#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return (*(int*)b - *(int*)a);
}

int main(){
    int N;
    scanf("%d",&N);
    int fT[N], mT[N];
    int fC = 0, mC = 0;
    
    for (int i = 0;i< N;i++){
        int ai,bi;
        scanf("%d %d",&ai,&bi);
    
        if(ai == 0){
            fT[fC++] = bi;
        }
        else
        mT[mC++] = bi;
    }
    qsort(fT,fC,sizeof(int),compare);
    qsort(mT,mC,sizeof(int),compare);
    
    for(int i = 0; i < fC; i++){
        printf("%d ",fT[i]);
    }
    for(int i = 0;i < mC; i++){
        printf("%d ",mT[i]);
    }
    return 0;
}