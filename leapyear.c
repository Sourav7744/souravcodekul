/* Write a C program to check whether a year is leap year or not */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the year u want to check :\n");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("Entered year is a leap year\n");
    }
    else if(n%100==0)
    {
        printf("Entered year is a leap year\n");
    }
    else if(n%400==0)
    {
        printf("Entered year is a leap year\n");
    }    
    else
    {
        printf("Entered year is not a leap year\n");
    }
    return 0;
}
    