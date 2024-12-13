#include <stdio.h>
int sum_of_first_and_last_digit(int N) 
{
    int last_digit = N % 10;
    while (N >= 10) 
    {
        N = N / 10;
    }
    int first_digit = N;
    return first_digit + last_digit;
}
int main() 
{
    int N;
    scanf("%d", &N);
    printf("%d\n", sum_of_first_and_last_digit(N));
}
