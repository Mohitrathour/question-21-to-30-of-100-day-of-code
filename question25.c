#include<stdio.h>
int main()
{
  int no1,no2,result;
  char operaters;
  printf("enter first no:\n");
  scanf("%d",&no1);
  printf("enter second no:\n");
  scanf("%d",&no2);
  printf("enter the operater\n");
  scanf("%c",&operaters);
  switch (operaters)
  {
  case '+':
    result=no1+no2;
    printf("%d\n",result);
    break;

    case '-':
    result=no1-no2;
    printf("%d\n",result);
    break;

    case '*':
    result=no1*no2;
    printf("%d\n",result);
    break;

    case '/':
    result=no1/no2;
    printf("%d\n",result);
    break;

    case '%':
    result=no1%no2;
    printf("%d\n",result);
    break;
  
    default:
       printf("invalid case");
    break;
    return 0;
  }
}