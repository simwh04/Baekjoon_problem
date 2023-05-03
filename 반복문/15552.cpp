#include <stdio.h>

int main()
{
	long int number;
	scanf("%d",&number);
	for(int i=1;i<=number;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
}

