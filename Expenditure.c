#include <stdio.h>

int main() 
{
    int X, Y, total_expenditure;
    scanf("%d", &X); 
    scanf("%d", &Y); 
    total_expenditure = Y * 30;
    if (X >= total_expenditure) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
}