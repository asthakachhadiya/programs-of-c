#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter the three number");
    scanf("%d %d %d",&a,&b,&c);
    (a==c)?printf("palindrome"):printf("not palindrome");
}