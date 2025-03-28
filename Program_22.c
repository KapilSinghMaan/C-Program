// Program to check whether entered year is Leap year or not.

#include<stdio.h>
#include<conio.h>
void main()
{
    int yr;
    printf("Enter any Year : ");
    scanf("%d",&yr);
    if (yr%400==0)
    {
        printf("\n%d is a Leap year.",yr);
    }
    else if(yr%100==0)
    {
        printf("\n%d is not a Leap year.",yr);
    }
    else if(yr%4==0)
    {
        printf("\n%d is a Leap year.",yr);
    }
    else
    {
        printf("\n%d is not a Leap year.",yr);
    }
    getch();
}