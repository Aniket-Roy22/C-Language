#include <stdio.h>
int gcd(int a, int b) 
{ 
	int hcf=0;
    for(int i = 1; i <= a || i <= b; i++)
    {
        if( a%i == 0 && b%i == 0 )
            hcf = i;
    }
   return hcf;
} 

int lcm(int a, int b) 
{ 
	return (a / gcd(a, b)) * b; 
} 

void main() 
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d = %d\nLCM of %d and %d = %d",a,b,gcd(a,b),a,b,lcm(a,b));
}