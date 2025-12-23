#include<stdio.h>
int total(void);
void main()
{
    
    total();
    

}
int total(void)
{
    int n,p,i;
    float r;
    printf("Enter a time period:");
    scanf("%d",&n);
    printf("\nEnter a principal amount:");
    scanf("%d",&p);
    printf("\nEnter a rate of intrest:");
    scanf("%f",&r);
    float total=p;
    for(i=1;i<=n;i++)
    {
    total=total*(1+r);
    }
    return(total);
}

