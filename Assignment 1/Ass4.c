#include<stdio.h>
#include<math.h>
int main(){
    float L,B,H,area,volume;
    printf("Enter the value of length ,breadth,height");
    scanf("%f%f%f",&L,&B,&H);
    area=2*((L*B)+(L*H)+(B*H));
    volume=L*B*H;
    printf("Area is:%f\n",area);
    printf("Volume is:%f",volume);
    return 0;
} 