#include <stdio.h>
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    for (int i = A; i <= B; i++) {
        if (i != A) {
            printf(" ");
        }
        printf("%d", i);
    }
    printf("\n");
}