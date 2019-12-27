/* Write a C program to print all natural numbers in reverse (from n to 1). - using while loop */

#include<stdio.h>

int main()
{
    int last=1;
    printf("Enter the last digit :\n");
    scanf("%d",&last);
    while(last!=0)
    {
        printf("%d\t",last);
        last--;
    }
    return 0;
}


