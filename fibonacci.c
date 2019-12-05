/*
    C program to print the Fibonacci series
*/

#include<stdio.h>

int main()
{
    int a,b,c,x;
    int i=0;
    printf("Enter the no. of terms you want in the series\n");
    scanf("%d",&x);
    a=0;
    b=1;
    c=0;
    printf("Fibonacci series is as follows\n");
    while(i<x)
    {
        
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
        i++;

    }
    return 0;

}