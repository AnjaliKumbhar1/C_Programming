#include<stdio.h>
#include<math.h>
int main(){
    float radius,area,circumference;
    float pi = 3.14;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area is:%f \n",area);
    circumference=2*pi*radius;
    printf("Circumference is:%f",circumference);
    return 0;

}