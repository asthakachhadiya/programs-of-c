#include<stdio.h>
struct table 
{
    int idno;
    char name[20];
    int sb[3];
    int total;
}st[10];
void main()
{
    int i,j,max,pos=0;
    for(i=0;i<2;i++)
    {
        scanf("%d %s",&st[i].idno,&st[i].name);
        for(j=0;j<3;j++)
        {
            printf("Enter marks of three subject :");
            scanf("%d",&st[i].sb[j]);
        }
    }
    for(i=0;i<2;i++)
    {
        st[i].total=0;
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            st[i].total=st[i].total+st[i].sb[j];
        }
    }
    for(i=0;i<2;i++)
    {
        printf("%d\t%s\t%d",st[i].idno,st[i].name,st[i].total);
        printf("\n");
    }
    printf("\n");
    max=st[0].total;
    for(i=1;i<2;i++)
    {
        if(max<st[i].total)
        {
            max=st[i].total;
            pos=i;
        }
    }
    printf("%d\t%s\t%d",st[pos].idno,st[pos].name,st[pos].total);

}