#include <stdio.h>
int main() 
{
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);
    int messi_points = 2 * A + B;
    int ronaldo_points = 2 * X + Y;
    if (messi_points > ronaldo_points) 
    {
        printf("Messi\n");
    } 
    else if (messi_points < ronaldo_points) 
    {
        printf("Ronaldo\n");
    } 
    else 
    {
        printf("Equal\n");
    }
    
    return 0;
}