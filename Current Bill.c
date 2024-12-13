#include <stdio.h>
float calculate_bill(int units) {
    float bill;
    if (units <= 199) {
        bill = units * 1.20;
    } 
    else if (units >= 200 && units < 400) 
    {
        bill = units * 1.50;
    } else if (units >= 400 && units < 600) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }
    float surcharge;
    if (bill > 400) {
        surcharge = bill * 0.15;
    } else {
        surcharge = 100;
    }
    return bill + surcharge;
}

int main() {
    int units;
    scanf("%d", &units);
    float final_amount = calculate_bill(units);
    printf("%.2f\n", final_amount);
}