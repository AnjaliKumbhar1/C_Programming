#include<stdio.h>
int main(){
    int a,b,temp=0;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping:a=%d \n b=%d",a,b);
    return 0;
} 