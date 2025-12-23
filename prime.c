/*#include<stdio.h>
void main()
{
    int n,i,flag;
    printf("Enter a number :");
    scanf("%d",&n);

    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("It is a non prime number");
    }
    else
    {
        printf("It is a prime number");
    }
}
*/
#include <stdio.h>

int main() {
    int low, up, i, j,flag;

    // Taking input for range
    printf("Enter lower interval: ");
    scanf("%d", &low);
    printf("Enter upper interval: ");
    scanf("%d", &up);

    printf("Prime numbers between %d and %d are:\n", low,up);

    // Loop from lower to upper
    for (i = low; i <= up; i++) {
        if (i < 2)
            continue;  // skip numbers less than 2

        flag= 1;  // assume i is prime

        // check divisibility
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag= 0;
                break;
            }
        }

        // print if prime
        if (flag == 1)
            printf("%d ", i);
    }

    return 0;
}
