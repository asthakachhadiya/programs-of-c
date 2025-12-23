#include<stdio.h>
struct iteam 
{
    char name[20];
    float price;
    int quan;
};
struct iteam update(struct iteam it,float Nprice,int Nquan)
{
    it.price=Nprice;
    it.quan=Nquan;
    return it;
}
void main()
{
    struct iteam it;
    float Nprice;
    int Nquan;

    printf("Enter product name :");
    scanf("%s",it.name);

    printf("Enter product price :");
    scanf("%f",&it.price);
    
    printf("Enter product Quantity :");
    scanf("%d",&it.quan);
    
    printf("Enter updated price :");
    scanf("%f",&Nprice);
    
    printf("Enter updated Quantity :");
    scanf("%d",&Nquan);
     
    it=update(it,Nprice,Nquan);
    
    printf("new price : %f\n",Nprice);
    printf("new Quantiry : %d",Nquan);

}
