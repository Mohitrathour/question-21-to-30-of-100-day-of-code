#include<stdio.h>
int main()
{
    int n,m=1;
    printf("enter the no\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf(" %d ", m++);
    }
    return 0;
}