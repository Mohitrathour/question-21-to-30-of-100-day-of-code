//Q24: Write a program to calculate an electricity bill based on units consumed.
#include<stdio.h>
int main()
{
    int bill;
    printf("enter the no of units");
    scanf("%d",&bill);
    printf("bill:  ₹%d",bill*5);
    return 0;
    
}