#include <stdio.h>
int main() 
{
    int N, X;
    scanf("%d %d", &N, &X);
    if (2 * X >= N) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
}