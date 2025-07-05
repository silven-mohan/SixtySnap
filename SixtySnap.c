/** Countdown Timer **/
 
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	long j;
	/* system("cls"); */
	printf("Enter the Preset Time:");
	scanf("%d", &n);
	for (i=n;i>=0;i--)
	{
		printf("0:%d",i);
		for(j=0;j<3315000000;j++);
		/* system("cls"); */
	}

	return 0;
}
