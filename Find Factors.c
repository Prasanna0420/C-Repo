#include <stdio.h>
void find_factors(int N) {
    for (int i = 1; i <= N; i++) 
    {
        if (N % i == 0) 
        { 
            printf("%d ", i);
        }
    }
}
int main() 
{
    int N;
    scanf("%d", &N);
    find_factors(N);
}