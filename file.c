#include<stdio.h>

void main()
{
    //File Reading using 'fgets' and 'fscanf'
    FILE *fptr1, *fptr2;

    fptr1 = fopen("Test.txt", "r");
    char str1[100];
    fgets(str1,100,fptr1);
    printf("File Data using 'fgets' : %s\n", str1);
    fclose(fptr1);

    fptr2 = fopen("Test.txt", "r");
    char str2[100];
    fscanf(fptr2,"%s",str2);
    printf("File Data using 'fscanf' : %s\n", str2);
    fclose(fptr2);

    //File writing using 'fprintf'
    FILE *fptr3;

    fptr3 = fopen64("Test.txt", "w");
    char str3[100];
    printf("Enter any text: ");
    fgets(str3,100,stdin);
    fprintf(fptr3,"%s",str3);
    fclose(fptr3);
}