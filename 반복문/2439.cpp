#include <stdio.h>

int main()
{
	int number;
	scanf("%d",&number);
	for(int i=1;i<=number;i++)
	{
		for(int j=number-1;j>=i;j--)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

