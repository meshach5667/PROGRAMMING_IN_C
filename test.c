#include <stdio.h>

int main()
{
    double grossSales, baseSalary, commissionRate, commission, totalPayment;
    char maritalStatus;

    printf("Enter gross sales: ");
    scanf("%lf", &grossSales);

    printf("Are you married with children? (y/n): ");
    scanf(" %c", &maritalStatus);

    baseSalary = 200.0;

    if (grossSales >= 5000 && grossSales <= 9999)
    {
        commissionRate = 0.07;
    }
    else if (grossSales < 5000)
    {
        commissionRate = 0.05;
    }
    else
    {
        commissionRate = 0.0;
    }

    // Add an extra 1% commission if married with children
    if (maritalStatus == 'y' || maritalStatus == 'Y')
    {
        commissionRate += 0.01;
    }

    commission = grossSales * commissionRate;

    totalPayment = baseSalary + commission;

    printf("Base Salary: $%.2f\n", baseSalary);
    printf("Your commission is : $%.2f\n", commission);
    printf("Your total Payment is : $%.2f\n", totalPayment);

    return 0;
}
