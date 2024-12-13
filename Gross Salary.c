#include <stdio.h>

int main() {
    int basic_salary;
    float DA, HRA, gross_salary;
    scanf("%d", &basic_salary);
    if (basic_salary <= 10000) {
        DA = 0.80 * basic_salary;
        HRA = 0.20 * basic_salary;
    } else if (basic_salary <= 20000) {
        DA = 0.90 * basic_salary;
        HRA = 0.25 * basic_salary;
    } else {
        DA = 0.95 * basic_salary;
        HRA = 0.30 * basic_salary;
    }
    gross_salary = basic_salary + DA + HRA;
    printf("%.2f\n", gross_salary);
}