#include<stdio.h>
void main()
{
    printf("PATTERN 10\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",(i%2==0)?(j%2==0)?1:0:(j%2==0)?0:1);
        }
        printf("\n");
    }

    printf("PATTERN 11\n");
    int c = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            if(k==0 || i==0)
				c=1;
        	else
				c = c*(i-k+1)/k;
            printf("%d   ",c);
        }
        printf("\n");
    }

    printf("PATTERN 12\n");
    int space = 0, n = 4;
    for (int i = 1; i <= (2*n-1); i++)
    {
        if(i<=n)
        {
            for (int j = 0; j < space; j++)
            {
                printf("  ");
            }
            space++;
        }
        else
        {
            space--;
            for (int j = 0; j < space-1; j++)
            {
                printf("  ");
            }
        }
        for (int k = 0; k <= n-space; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("PATTERN 13\n");
    int l = 7, a = 1;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= l*2; j++)
        {
            if (j<=a || (j-l)<=a && (j-l)>0)
                printf("%d ",a);
            else
                printf("   ");
        }
        if(i<=((l+1)/2)-1)
            a+=2;
        else
            a-=2;
        printf("\n");
    }
}