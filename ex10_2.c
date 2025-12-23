#include<stdio.h>
struct birth
{
    int dd;
    int mm;
    int yyyy;
}age;
struct person
{
    char name[10];
    struct birth age;
}p[10];
void main()
{
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%s",p[i].name);
        scanf("%d",&p[i].age.dd);
        scanf("%d",&p[i].age.mm);
        scanf("%d",&p[i].age.yyyy);
    }
    for(i=0;i<10;i++)
    {
        if(p[i].age.yyyy>=2007)
        {
            printf("%d-%d-%d\n",p[i].age.dd,p[i].age.mm,p[i].age.yyyy);
        }
        else if(p[i].age.yyyy>=1965)
        {
            printf("%d\n",2025-p[i].age.yyyy);
        }
        else
        {
            printf("Old Person\n");
        }
    }
}