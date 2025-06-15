#include<stdio.h>

int gcd(int a,int b);

int main()
{
	int a,b,cd;
	printf("enter the 1st number: ");
	scanf("%d",&a);
	printf("enter the 2nd number: ");
	scanf("%d",&b);
	cd=gcd(a,b);
	printf("GCD of %d & %d is %d",a,b,cd);
	return 0;
}

int gcd(int a, int b)
{
	int cd;
	if(a<0)
	{
		a=a*(-1);
	}
	if(b<0)
	{
		b=b*(-1);
	}
	if(a>b)
	{
		for(int i=1;i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			{
				cd=i;
			}
		}
	}
	else
	{
		for(int i=1;i<=a;i++)
		{
			if(a%i==0 && b%i==0)
			{
				cd=i;
			}
		}
	}
	return cd;
}
