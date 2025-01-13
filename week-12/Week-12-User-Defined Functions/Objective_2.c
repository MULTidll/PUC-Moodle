/*
 * Complete the 'pthFactor' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. LONG_INTEGER n
 *  2. LONG_INTEGER p
 */
int compare(const void *a,const void *b){
    return (*(long*)a-*(long*)b);
}
long pthFactor(long n, long p) 
{
    long factors[100000];
    int count = 0;
    for (long i = 1;i * i <= n; i++){
        if(n%i == 0){
            factors[count++] = i;
            if(i != n/i){
                factors[count++] = n/i;
            }
        }
    }
    qsort(factors,count,sizeof(long),compare);
    
    if(p > count)
    return 0;
    return factors[p - 1];
}