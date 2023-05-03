#include <stdio.h>

int main()
{
	int first,second,third;
	scanf("%d %d %d",&first,&second,&third);
	if (first == second && second == third)
	{
		printf("%d",10000+first*1000);
	}
	else if ((first == third) && first !=second)
	{
		printf("%d",1000+first*100);
	}
	else if ((first == second) && first !=third)
	{
		printf("%d",1000+first*100);
	}
	else if ((second == third) && first !=third)
	{
		printf("%d",1000+second*100);
	}
	else
	{
		int max_num;
		if(first>second){if(first>third){printf("%d",first*100);}}
		if(second>first){if(second>third){printf("%d",second*100);}}
		if(third>first){if(third>second){printf("%d",third*100);}}
	}
}
