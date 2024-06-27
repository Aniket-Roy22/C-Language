#include<stdio.h>
void main()
{
	int n=0, s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int cp = n;
	while(cp>0)
	{
		s = s*10 + cp%10;
		cp/=10;
	}
	printf(n==s?"Palindrome Number.\n":"Not a Palindrom Number.\n");

}
