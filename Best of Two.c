#include <stdio.h>
int calculate_score(int a, int b, int c) 
{
    int min1, min2;
    if (a >= b && a >= c) 
    {
        min1 = a;
        min2 = (b >= c) ? b : c;
    } 
    else if (b >= a && b >= c) 
    {
        min1 = b;
        min2 = (a >= c) ? a : c;
    } 
    else 
    {
        min1 = c;
        min2 = (a >= b) ? a : b;
    }
    return min1 + min2;
}

int main() 
{
    int A1, A2, A3, B1, B2, B3;
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);
    int alice_score = calculate_score(A1, A2, A3);
    int bob_score = calculate_score(B1, B2, B3);
    if (alice_score > bob_score) {
        printf("Alice\n");
    } else if (bob_score > alice_score) {
        printf("Bob\n");
    } else {
        printf("Tie\n");
    }

    return 0;
}