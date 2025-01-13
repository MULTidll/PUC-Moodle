/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER x
 *  2. INTEGER n
 */
#include <math.h>
int powerSum(int x, int m, int n){
    int power = (int)pow(m,n);
    
    if (x == 0){
        return 1;
    }
    if(x < 0 || power > x){
        return 0;
    }
    return powerSum(x - power,m+1,n) + powerSum(x,m+1,n);
}