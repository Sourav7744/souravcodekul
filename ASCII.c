/* C program to print all ASCII character with their values */

#include<stdio.h>

int main()
{
    int i;
    for(i=0;i<127;i++)
    {
        printf("ASCII value of characters is %c = %d\n",i,i);
    }
    return 0;
}