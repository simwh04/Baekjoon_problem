#include <stdio.h>

int main()
{
	int number;
	scanf("%d",&number);
	for(int i=1;i<=number;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("Case #%d: %d\n",i,a+b);
	}
}

