//Q28: Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
    int n,product=1,i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i=2 ; i<= n; i++)
    {
        product=product*i;
    }
    printf("the product of first n even no is: %d",product);
    return 0;
}