#include<stdio.h>
int fact(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        s *= i;
    }
    return s;
}

void main()
{
    int a = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d! = %d\n",a,fact(a));
}