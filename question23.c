//Q23: Write a program to calculate a library fine based on late days.
#include<stdio.h>
int main()
{
    int days;
    printf("enter the no of late days");
    scanf("%d",&days);
    if(days <= 5)
    {
        printf("fine ₹%d" ,days * 2);
    }
    else if(days <= 10)
    {
        printf("fine ₹%d",days*4);
    }
    else if( days <= 30)
    { 
        printf("fine%d",days * 6);
    }
    else
    {
        printf("membership cancelled\n");
    }
    return 0;
}