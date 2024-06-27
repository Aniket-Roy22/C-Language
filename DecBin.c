#include<stdio.h>
long long binary(int n)
{
    int rem, i=1;
    long long bin=0;
    while (n!=0)
    {
        rem = n%2;
        n/=2;
        bin += rem*i;
        i *= 10;
    }
    return bin;
}

void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Binary Equivalent of %d is %lld.",a,binary(a));
}