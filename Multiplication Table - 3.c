#include <stdio.h>
int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    for (int i = A; i <= B; i++) 
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }
}