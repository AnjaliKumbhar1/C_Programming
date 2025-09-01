#include<stdio.h>
#include<math.h>
int main(){
    float F,C,K;
    printf("Enter the Value of Fahrenheit:");
    scanf("%f",&F);
    C = ((5/9)*(F-32));
    K= C+273.15;
    printf("Celsius is: %f \n",C);
    printf("Kelvin is: %f",K);
    return 0;
}