#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=1 ; i<= 2*n; i+=2)
    {
        sum+=i;
    }
    printf("the sum of first n odd no is: %d",sum);
    return 0;
}