#include<stdio.h>

int fact(int);

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial on %d = %d\n",n,fact(n));
}

int fact(int a)
{
    if(a==2)
        return 2;
    return (a*fact(a-1));
}