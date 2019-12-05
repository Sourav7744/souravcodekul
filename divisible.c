/*
  C program to find whether the number is divisible by 5 and 11 or not
*/

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        if(a%11==0)
        {
            printf("The number is Divisible by 5 and 11 Both\n");
        }
        else
        {
            printf("Entered number is not divisible by 5 and 11\n");
        }
    }
    return 0;

}