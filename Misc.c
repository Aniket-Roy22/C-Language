#include<stdio.h>

void main()
{
    int a;
    int *ptr = &a;
    scanf("%d", ptr);
    printf("%d", *ptr);
}