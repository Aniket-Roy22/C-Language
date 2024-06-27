#include<stdio.h>
int main()
{
    int x,y,m;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
     printf("Enter m:");
    scanf("%d",&m);
    int arr[x][y];
    int brr[y][m];
    int res[x][m];
    printf("Enter elenent of first matrix:\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("Enter elent of %d %d:",i,j);
            scanf("%d",&arr[i][j]);

        }
    }
    printf("First matrix\n");
     for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }
     printf("Enter elenent of second matrix:\n");
     for(int i=0;i<y;i++)
    {
        for(int j=0;j<m;j++)
        {
             printf("Enter elent of %d %d:",i,j);
            scanf("%d",&brr[i][j]);

        }
    }
     printf("Second matrix\n");
     for(int i=0;i<y;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",brr[i][j]);
            
        }
        printf("\n");
    }
    int cr=y;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<m;j++)
        {
            res[i][j]=0;
            for(int k=0;k<cr;k++)
            {
            res[i][j] +=arr[i][k]*brr[k][j];
            }
        }
    }
    printf("Multiplication of two array:\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    printf("Transpose\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<x;j++)
        {
            printf("%d ",res[j][i]);
        }
        printf("\n");
    }
}