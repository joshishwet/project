#include <stdio.h>

int main() {
    float baseSalary, hraPercent, daPercent, taPercent;
    float hra, da, ta, grossSalary;

    
    printf("Enter base salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);

    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);

    printf("Enter TA percentage: ");
    scanf("%f", &taPercent);

    
    hra = (hraPercent / 100) * baseSalary;
    da  = (daPercent / 100) * baseSalary;
    ta  = (taPercent / 100) * baseSalary;
    
    grossSalary = baseSalary + hra + da + ta;

    
    printf("Gross Salary = ?%.2f\n", grossSalary);

}