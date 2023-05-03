#include <stdio.h>

int main()
{
	int point[1];
	scanf("%d %d",&point[0],&point[1]);
	if(point[0]>0 && point[1]>0){printf("1");}
	else if(point[0]<0 && point[1]>0){printf("2");}
	else if(point[0]<0 && point[1]<0){printf("3");}
	else if(point[0]>0 && point[1]<0){printf("4");}
	else{printf("wrong!!");}
}
