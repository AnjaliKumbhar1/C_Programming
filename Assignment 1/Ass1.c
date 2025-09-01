#include<stdio.h>
#include<math.h>
int main(){
    float a,b,AM,HM;
    printf("Enter  the two values:");
    scanf("%f%f",&a,&b);
    AM=(a+b)/2 ;
    HM=(a*b)/(a+b);
    printf("Value of AM is:%f\n",AM);
    printf("Value of HM is:%f\n",HM);
    return 0;
}