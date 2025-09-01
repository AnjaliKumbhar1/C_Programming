#include<stdio.h>
int main(){
    float dw,dh;//door width ,height
    float ww,wh;//window width,height
    float length,rw,rh;//for room width ,height
    float wa,da,wina,pa,whitewasharea;//wall area,door area,window area,paint area

    printf("Enter the value of door width and height: ");
    scanf("%f%f",&dw,&dh);
    printf("Enter the value of window width and height: ");
    scanf("%f%f",&ww,&wh);
    printf("Enter the value of room length,width and height: ");
    scanf("%f%f%f",&length,&rw,&rh);

    wa = 2*(length*rh)+2*(rw*rh);
    da=dw*dh;
    wina=2*(ww*wh);
    pa=wa-da-wina;
    whitewasharea=length*rw;
    
    printf("Painted area :%f sq.m\n",pa);
    printf("Whitewasarea area :%f sq.m\n",whitewasharea);
    return 0;
}