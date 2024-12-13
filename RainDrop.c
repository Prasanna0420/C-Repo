#include <stdio.h>
#include <stdlib.h>
void raindrops(int N) 
{
    int factor_found = 0;
    if (N % 3 == 0) {
        printf("Pling");
        factor_found = 1;
    }
    if (N % 5 == 0) {
        printf("Plang");
        factor_found = 1;
    }
    if (N % 7 == 0) {
        printf("Plong");
        factor_found = 1;
    }
    if (!factor_found) {
        printf("%d", N);
    }

    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);
    raindrops(N);
}