//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int factorial=1,no;
    printf("enter a no\n");
    scanf("%d",no);
    for(int i=1 ; i<=no ; i++)
    { 
        factorial=factorial*i;
    }
    printf("factorial: %d",factorial);
    return 0;
}