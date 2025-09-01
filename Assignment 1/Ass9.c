#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    printf("Privious Charater %c \n", ch - 1);
    printf("Current Charater %c \n", ch);
    printf("Next Charater %c \n", ch + 1);
    return 0;
}