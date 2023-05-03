#include <stdio.h>

int main()
{
	int H,M;
	scanf("%d %d",&H,&M);
	if(M<45)
	{
		H-=1;
		if(H<0){printf("23 %d",M+15);}
		else {printf("%d %d",H,M+15);}
	}
	else if(M>=45)
	{
		if(H<0){printf("23 %d",M-45);}
		else {printf("%d %d",H,M-45);}
	}
}
