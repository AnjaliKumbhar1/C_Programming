#include<stdio.h>
#include<math.h>
int main(){
    float radius,height,pi=3.14,area,volume;
    printf("Enter the radius and Height:");
    scanf("%f%f",&radius,&height);
    area=((2*pi*radius*radius)+(2*pi*radius*height));
    volume=pi*radius*radius*height;
    printf("Area is:%f \n",area);
    printf("Volume is:%f",volume);
    return 0;
}