#include <stdio.h>
int main()
{
    // BS=basic salary,HRA=house rent,DA=dearness allowance,Tax,TS=Total Salary
    float BS, HRA, DA, Tax, TS;
    printf("Enter the value of Basic Salary:");
    scanf("%f", &BS);
    printf("Enter the value HRA:");
    scanf("%f", &HRA);
    printf("Enter the value of DA:");
    scanf("%f", &DA);
    printf("Enter the value of Tax :");
    scanf("%f", &Tax);

    TS = BS + (BS * ((HRA + DA) - Tax)) / 100;
    printf("Total Salary is:%f", TS);
    return 0;
}