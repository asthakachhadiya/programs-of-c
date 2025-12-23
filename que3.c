#include<stdio.h>
void main()
{
    char a;
    printf("Enter character in uppercase:");
    scanf("%c",&a);
switch(a)
{
    case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
     printf("VOWEL");
    break;
    default :
    printf("CONSONANT"); 
}


}