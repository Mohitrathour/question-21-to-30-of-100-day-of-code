#include<stdio.h>
int main()
{
    float costprice,sellingprice,temp,profitloss,percentage;
    printf("enter the value of cost price\n");
    scanf("%d",&costprice);
    printf("enter the value of selling price\n");
    scanf("%d",&sellingprice);
    if(costprice>sellingprice)
    {
        profitloss=costprice-sellingprice;
        percentage=(profitloss/costprice)*100;
        printf("loss %.2f%%\n",percentage);
    }
    else if (sellingprice>costprice)
    {
        profitloss=sellingprice-costprice;
        percentage=(profitloss/costprice)*100;
        printf("profit %.2f%%\n",percentage);
    }
    else
    {
        printf("no profit no loss\n");
    }
    return 0;

}