#include<stdio.h>
#include<math.h>
int main(){
    float velo,acc,T, Fvelo,Dist;
    printf("Enter the value of velocity,acceleration,time:");
    scanf("%f%f%f",&velo,&acc,&T);
    Fvelo=velo+(acc*T);
    Dist=velo+(acc*((T)*(T)));
    printf("Final Velocity is:%f \n",Fvelo);
    printf("Distance is:%f",Dist);
    return 0;
}