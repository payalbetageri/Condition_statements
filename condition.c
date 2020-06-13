#include<stdio.h>

void main()
{
	int c;
	printf("enter choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf("Item : Pizza\n Cost : Rs239\n");
			break;
		case 2: printf("Item : Burger\n Cost : Rs129\n");break;
		case 3: printf("Item : Pasta\n Cost : Rs179\n");break;
		case 4: printf("Item : French Fries\n Cost : Rs99\n");break;
		case 5: printf("Item : Sandwich\n Cost : Rs149\n");break;
	}
}
