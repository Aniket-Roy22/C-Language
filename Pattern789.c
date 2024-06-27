#include<stdio.h>
void main()
{
    printf("PATTERN 7\n");
    int count = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 3; j >= i; j--)
        {
            printf("    ");
        }
        for (int k = 1; k <= (2*i - 1); k++)
        {
            if (k <= i)
            {
                count++;
                printf("%d   ",count);
            }
            else
            {
                count--;
                printf("%d   ",count);
            }
        }
        printf("\n");
    }

    printf("PATTERN 8\n");
    int a=1, b=0, c=0;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(c>9)
                printf("%d ",c);
            else
                printf("%d  ",c);
            c=a+b; a=b; b=c;
        }
        printf("\n");
    }
    
    printf("PATTERN 9\n");
    for (int i = 1; i <= 4; i++)
    {
        int x=0;
        for (int j = 1; j <= (2*i - 1); j++)
        {
            if (j<=i)
            {
                x++;
                printf("%d",x);
            }
            else
            {
                x--;
                printf("%d",x);
            }
        }
        printf("\n");
    }
    for (int p = 3; p >= 1; p--)
    {
        int y=0;
        for (int q = 1; q <= (2*p - 1); q++)
        {
            if (q<=p)
            {
                y++;
                printf("%d",y);
            }
            else
            {
                y--;
                printf("%d",y);
            }
        }
        printf("\n");
    }
}