#include <stdio.h>

int	main()
{
	char priv[20];
	printf("Hi, i'm Johnbot, what's your name\n");
	scanf("%s",priv);
	int old;
	printf("Ok %s , How old are you?\n", priv);
	scanf("%d", &old);
	printf("Woow, you look young, i thought you %d\n", old - 2);
	printf("So, do you have any kids? write  y - 1, n - 0\n");
	int kid1;
	int kid2;
	char kid3[5];
	scanf("%d", &kid1);
	if (old > 25)
	{	
		if (kid1 == 1)
		{
			printf("How many?\n");
			scanf("%d", &kid2);
			if (kid2 >= 1)
			{
				printf("Wow, you are super mom\n");
			}
			else
			{
				printf("It's cool");
			}
		}
		else if(kid1 == 0)
		{
			printf("Are you planning to start? write y/n ");
			scanf("%s", kid3);
			
		}
	}
	int elsekid;
	int elsekidold;
	if (old < 25)
	{
		printf("Do you want to children? write y - 1, n - 0\n");
		scanf("%d", &elsekid);
		if (elsekid == 1)
		{
			printf("How many children you want?\n");
			scanf("%d", &elsekidold);
			printf("It's good\n");
		}
		else if(elsekid == 0)
		{
			printf("Wow, why?\n");
		}

	}
}
