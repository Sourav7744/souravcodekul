/*
 C Program to print whether it is an vowel or an consonant
*/

#include<stdio.h>

int main()

{
  char ch;
  printf("Enter the Alphabetical character\n");
  scanf("%c",&ch);
  switch(ch)
  {
    case 'a':printf("entered character is an vowel"); 
             break;
    case 'A':printf("Entered character is an vowel");
             break;
    case 'e':printf("Entered character is an vowel");
             break;             
    case 'E':printf("Entered character is an Vowel");
             break;
    case 'i':printf("Entered character is an Vowel");
             break; 
    case 'I':printf("Entered character is an Vowel");
             break; 
    case 'O':printf("Entered character is an Vowel");
             break; 
    case 'o':printf("Entered character is an Vowel");
             break;                                    
    case 'u':printf("Entered character is an Vowel");
             break; 
    case 'U':printf("Entered character is an Vowel");
             break; 
    default: printf("Entered character is a Consonant");
             break;         
    
 }
return 0;
}