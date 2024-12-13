#include <stdio.h>
int main() 
{
    int N, sum = 0, digit;
    scanf("%d", &N);
    while (N > 0) 
    {
        digit = N % 10; 
        sum += digit;   
        N /= 10;       
    }
    printf("%d\n", sum);
}