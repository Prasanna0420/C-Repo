#include <stdio.h>
#include <math.h>
const char* is_prime(int N) {
    if (N <= 1) {
        return "Not Prime";
    }
    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            return "Not Prime";
        }
    }
    return "Prime";
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%s\n", is_prime(N));
}