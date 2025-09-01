#include<stdio.h>
int main(){
    int amount;
    char One,Five,Ten;
    printf("Enter the amount:");
    scanf("%d",&amount);
    Ten=amount/10;
    amount=amount%10;

    Five=amount/5;
    amount=amount%5;

    One=amount;

    printf("Number of Ten notes:%d \n",Ten);
    printf("Number of Five notes:%d \n",Five);
    printf("Number of One notes:%d \n",One);
    return 0;
}