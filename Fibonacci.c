#include<stdio.h>

void fibo(int,int,int,int);

void main()
{
    int a=1, b=0, c=0, n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series upto %d terms: ",n);
    fibo(a,b,c,n);
}

void fibo(int a,int b, int c,int n)
{
    if(n==0)
        return;
    else
    {
        printf("%d ",c);
        return fibo(b,(a+b),(a+b),n-1);
    }
}