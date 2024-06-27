#include<stdio.h>
#include<math.h>
void main()
{
	int n=0, c=0, s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int cp1 = n;
	while(cp1>0)
	{
		cp1/=10; c++;
	}
	int cp2 = n;
	while(cp2>0)
	{
		s += pow(cp2%10,c);
		cp2/=10;
	}
	if(n==s)
	printf("%d is an Armstrong Number.\n",n);
	else
	printf("%d is not an Armstrong Number.\n",n);
}
