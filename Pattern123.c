#include<stdio.h>
void main()
{
    printf("PATTERN 1\n");
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("PATTERN 2\n");
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= 1; j--)
        {
            if(j>i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    
    printf("PATTERN 3\n");
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if(j<i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
}