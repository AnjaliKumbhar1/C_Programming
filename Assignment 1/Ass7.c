#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2,y1,y2,D;
    printf("Enter the value of co-ordinates:");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    D=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("Distance between two coordinates are:%f",D);
    return 0;
}
