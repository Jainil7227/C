#include <stdio.h>

int main() {
    float basic, hra, da, grossSalary;
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic);
    hra = 0.20 * basic;  
    da = 1.50 * basic;   
    grossSalary = basic + hra + da;
    printf("\nSalary Breakdown:\n");
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA (20%% of Basic): %.2f\n", hra);
    printf("DA (150%% of Basic): %.2f\n", da);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
