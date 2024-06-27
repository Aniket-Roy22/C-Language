#include<stdio.h>

void swap(int*,int*);

void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Value of 'a' and 'b' before swapping: %d and %d\n",a,b);
    swap(&a,&b);
    printf("Value of 'a' and 'b' after swapping: %d and %d",a,b);
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}