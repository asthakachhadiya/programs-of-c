#include <stdio.h>

void main()
{
    int n, i, num;
    int max, min, sum;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num; 
    for(i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
            max = num;

        if(num < min)
            min = num;
    }

    sum = max + min;

    printf("\nMaximum number = %d", max);
    printf("\nMinimum number = %d", min);
    printf("\nSum of maximum and minimum = %d\n", sum);
}
