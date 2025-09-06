//Q30: Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int n,reverse=0,temp;
    printf("enter the no to be reversed\n");
    scanf("%d",&n);
    while(n > 0)
    {
        temp=n%10;
        reverse=reverse*10+temp;
        n=n/10;
    }
    printf("the reverse value is %d",reverse);
    return 0;
}