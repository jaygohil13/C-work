#include<stdio.h>

void main()
{
	int day;
	printf("enter the number of day\n1=monday.....7=sunday=");
	scanf("%d",&day);
	
	
	switch(day)
	{
		case 1:printf("\nmonday");
		break;
		case 2:printf("\ntuesday");
		break;
		case 3:printf("\nwednesday");
		break;
		case 4:printf("\nthursday");
		break;
		case 5:printf("\nfriday");
		break;
		case 6:printf("\nsaturday");
		break;
		case 7:printf("\nsunday");
		break;
		default:printf("\ninvalid choice");
	}
}