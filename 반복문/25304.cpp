#include <stdio.h>

int main()
{
	int total_price,number,purchase_price=0,a,b;
	scanf("%d %d",&total_price,&number);
	for(int i=1;i<=number;i++)
	{
		scanf("%d %d",&a,&b);
		purchase_price = (a*b)+purchase_price;
	}	
	if(total_price == purchase_price)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
