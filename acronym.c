#include<stdio.h>
#include<string.h>

void acro(char*, char*);

void main()
{
    char sentence[200]; char acronym[100];
    printf("Enter a sentence: ");
    gets(sentence);
    printf("Acronym : ");
    acro(&(sentence[0]), &(acronym[0]));
    puts(acronym);
}

void acro(char *a, char* acr)
{
    int i = 0;
    *acr = *a;
    while (*a != '\0')
    {
        if (*a == ' ')
        {
            i++;
            a++;
            acr++;
            *acr = *a;
        }
        a++;
    }
}