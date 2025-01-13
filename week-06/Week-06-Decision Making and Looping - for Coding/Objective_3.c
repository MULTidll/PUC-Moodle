#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b) {
    unsigned long long ua = *(unsigned long long*)a;
    unsigned long long ub = *(unsigned long long*)b;
    if (ua < ub) return -1;
    if (ua > ub) return 1;
    return 0;
}

unsigned long long find_pth_factor(unsigned long long n, unsigned long long p) {
    unsigned long long *factors = malloc(1000 * sizeof(unsigned long long));
    unsigned long long count = 0;
    unsigned long long sqrt_n = sqrt((double)n);
    for(unsigned long long i = 1; i <= sqrt_n; i++) {
        if(n % i == 0){
            factors[count++] = i;
            if(n / i != i){
                factors[count++] = n / i;
            }
        }
    }
    qsort(factors, count, sizeof(unsigned long long), compare);
    unsigned long long result = (p <= count) ? factors[p-1] : 0;
    free(factors);
    return result;
}

int main(){
    unsigned long long n, p;
    scanf("%llu", &n);
    scanf("%llu", &p);
    printf("%llu", find_pth_factor(n, p));
    return 0;
}