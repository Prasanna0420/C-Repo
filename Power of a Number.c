#include <stdio.h>
#include <math.h>
long long mod_pow(long long x, long long y, long long M) 
{
    long long result = 1;
    x = x % M;

    while (y > 0) {
        if (y % 2 == 1) 
        {
            result = (result * x) % M;
        }
        y = y / 2;
        x = (x * x) % M;
    }
    return result;
}

int main() 
{
    long long x, y, M;
    scanf("%lld %lld %lld", &x, &y, &M);
    long long result = mod_pow(x, y, M);
    printf("%lld\n", result);
}