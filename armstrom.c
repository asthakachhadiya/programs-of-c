#include <stdio.h>
void main()
{
    int num, temp, remainder, sum;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++)
    {
        temp = num;
        sum = 0;

        while (temp > 0) 
        {
            remainder = temp % 10;
            sum = sum + (remainder * remainder * remainder);
            temp = temp / 10;
        }

        if (sum == num) 
        {
            printf("%d\n", num);
        }
    }
}
