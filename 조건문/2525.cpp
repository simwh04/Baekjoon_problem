#include <stdio.h>

int main()
{
	int H,M,oven_M;
	scanf("%d %d %d",&H,&M,&oven_M);
	if(M+oven_M>=60)
	{
		
		H=H+((M+oven_M)/60);
		if(H>22)
		{
			if(H >= 24)
			{
				H=H-24;
			}
			printf("%d %d",H,((M+oven_M)%60));
		}
		else{printf("%d %d",H,((M+oven_M)%60));}
	}
	else if(M+oven_M<60)
	{
		printf("%d %d",H,M+oven_M);
	}
}
