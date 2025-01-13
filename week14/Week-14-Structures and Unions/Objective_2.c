#include <stdio.h>
#include <math.h>

double calArea(int a,int b,int c){
    double p = (a + b + c) / 2.0;
    double area = sqrt(p*(p-a)*(p-b)*(p-c));
    return area;
}

int main(){
    int n;
    scanf("%d",&n);
    int triangles[n][3];
    double areas[n];
    for(int i = 0;i < n;i++){
        scanf("%d %d %d",&triangles[i][0],&triangles[i][1],&triangles[i][2]);
        areas[i] = calArea(triangles[i][0],triangles[i][1],triangles[i][2]);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1;j < n;j++){
            if(areas[i] > areas[j]){
                double tempArea = areas[i];
                areas[i] = areas[j];
                areas[j] = tempArea;
                int temp[3];
                for(int k = 0; k < 3;k++){
                    temp[k] = triangles[i][k];
                    triangles[i][k] = triangles[j][k];
                    triangles[j][k] = temp[k];
                }
            }
        }
    }
    for(int i = 0;i < n;i++){
        printf("%d %d %d\n",triangles[i][0],triangles[i][1],triangles[i][2]);
    }
    return 0;
}