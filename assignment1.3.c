#include<stdio.h>
void main()
{
    int num,i,j,sum=0;
    int pcount=0,ncount=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter num %d =",i);
        scanf("%d",&num);
        
        if(num>0)
        {
            sum=sum+num;
            pcount++;
        }
        else if(num<0)
        {
            ncount++;
        }
        else
        printf("Zero is not possitive or nagetive Number");
    }
    printf("Sum=%d\n",sum);
    printf("Positive Number=%d\n",pcount);
    printf("Nagetive Number=%d\n",ncount);

}