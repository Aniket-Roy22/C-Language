#include<stdio.h>

int sum(int);

void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Sum of first %d numbers = %d\n",n,sum(n));
}

int sum(int a)
{
    if (a==1)
        return 1;
    return (a+sum(a-1));
}