#include<stdio.h>

void print(int[],int);

void main()
{
    int n;
    printf("Enter array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements printed using recursion: ");
    print(arr,n-1);
}

void print(int arr[], int n)
{
    if(n<0)
        return;
    else
    {
        print(arr, n-1);
        printf("%d ",arr[n]);
    }
}