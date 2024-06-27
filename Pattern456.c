#include<stdio.h>
void main()
{
    printf("PATTREN 4\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            if(j>i)
                printf("  ");
            else
                printf("*   ");            
        }
        printf("\n");
    }

    printf("PATTERN 5\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);        
        }
        printf("\n");
    }

    printf("PATTERN 6\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 2; j--)
        {
            if(j>i)
                printf("   ");
            else
                printf("%d  ",j);            
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d  ",k);
        }
        printf("\n");
    }
}