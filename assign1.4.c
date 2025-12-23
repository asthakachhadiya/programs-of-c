#include <stdio.h>
void main() 
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i); 
            sum += i;           
        }
    }
    printf("\nSum of all factors = %d\n", sum);
}
