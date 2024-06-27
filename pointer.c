#include<stdio.h>
void main()
{
    int x = 5;
    int *ptr = &x;
    int **pptr = &ptr;

    printf("%u\n",&x);
    printf("%u\n",&ptr);
    printf("%u\n",&pptr);
    printf("%u\n",*pptr);
    printf("%u\n",*(&pptr));

    printf("%d\n",*(*pptr));
}