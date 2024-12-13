#include <stdio.h>
int main() 
{
    int N, R;
    scanf("%d %d", &N, &R);
    for (int i = 1; i <= R; i++) 
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }
}