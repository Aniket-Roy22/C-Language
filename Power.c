#include<stdio.h>
int power(int a, int b)
{
    int p=1;
    for (int i = 1; i <= b; i++)
    {
        p *= a;
    }
    return p;
}

void main()
{
    int x=0, r=0;
    printf("Enter a number and its power : ");
    scanf("%d%d",&x,&r);
    printf("%d^%d = %d",x,r,power(x,r));
}