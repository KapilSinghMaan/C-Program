// Program to print ASCII value of entered character by user.

#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter any Character : ");
    scanf("%c",&ch);
    printf("\nASCII value of %c is %d",ch,ch);
}