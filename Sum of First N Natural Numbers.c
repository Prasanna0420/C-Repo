#include <stdio.h>
int sum_of_natural_numbers(int N) 
{
    return N * (N + 1) / 2;
}
int main() 
{
    int N;
    scanf("%d", &N);
    printf("%d\n", sum_of_natural_numbers(N));
}