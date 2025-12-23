//search array eliments
#include<stdio.h>
void main()
{
    int a[10];
    int i,j,n;
    int pos,match=0;
    printf("Enter the number of element:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element:");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            match=1;
            pos=i;
            printf("Position=%d\n",pos);
            break;
        }
       
    }
    if(match==0)
    {
        printf("No match found");
    }
    


}