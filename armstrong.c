/* C program for Armstrong number */

#include<stdio.h>  

int main()
{
    int num,sum=0,temp,x;
    printf("Enter the number :\n");
    scanf("%d",&num);
    while(num>0)
    {
        x=num%10;
        sum=sum+(x*x*x*x);
        num=num/10;
    }
    if(temp==sum)
    {
        printf("Entered number is an Armstrong number\n");
    }
    else
    {
        printf("Entered number is not an Armstrong number\n");
    }
    return 0;
}

