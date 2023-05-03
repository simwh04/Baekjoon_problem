#include <stdio.h>

int main()
{
	int a,b;
	for (int i = 1; 1; ++i)
	{
		if (scanf("%d %d", &a, &b) != EOF)
			printf("%d\n", a + b);
		else
			break;
	}
}


