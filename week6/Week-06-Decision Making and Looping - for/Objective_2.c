#include <stdio.h>
#include <math.h>

#define MOD 1000000007

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    
    long long S = (n * (n + 1)) / 2;
   
    if (S < k) {
        printf("%lld\n", S % MOD);
        return 0;
    }
    
    if (S == k) {
        printf("%lld\n", (S - 1) % MOD);
        return 0;
    }

    long long x = (long long)floor((-1.0 + sqrt(1.0 + 8.0 * k)) / 2.0);
    long long prefix = x * (x + 1LL) / 2LL;

    
    if (prefix != k) {
        printf("%lld\n", S % MOD);
        return 0;
    }

    
    for (long long m = 1; m <= x; m++) {
        if (prefix - m != k) {
            printf("%lld\n", (S - m) % MOD);
            return 0;
        }
    }

    printf("%lld\n", S % MOD);
    return 0;
}