#include <stdio.h>

int main() 
{
    int hurl_factor, spin_factor, speed_factor;
    scanf("%d %d %d", &hurl_factor, &spin_factor, &speed_factor);
    int condition1 = (hurl_factor > 50);
    int condition2 = (spin_factor > 60);
    int condition3 = (speed_factor > 100);
    if (condition1 && condition2 && condition3) 
    {
        printf("10\n");
    } 
    else if (condition1 && condition2) 
    {
        printf("9\n");
    } 
    else if (condition2 && condition3) 
    {
        printf("8\n");
    } 
    else if (condition1 && condition3) 
    {
        printf("7\n");
    } 
    else if (condition1 || condition2 || condition3) 
    {
        printf("6\n");
    } else {
        printf("5\n");
    }
}