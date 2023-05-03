#include <stdio.h>

int main()
{
	int number;
	scanf("%d",&number);
	for(int i=1;i<=number;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
}
