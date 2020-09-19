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
	printf("So, do you have any kids? write  yes - 1, no - 0\n");
	int kid1;
	int kid2;
	int kid3;
	int kid4;
	char reason[100];
	scanf("%d", &kid1);
	if (old >= 25)
	{	
		if (kid1 == 1)
		{
			printf("How many?\n");
			scanf("%d", &kid2);
			if (kid2 >= 1)
			{
				printf("Wow, you are super mom\n");
			}
			else if(kid2 == 0)
			{
				printf("Ooops, you confuse me :(");
			}
			else
			{
				printf("It's cool\n");
			}
		}
		else if(kid1 == 0)
		{
			printf("Are you planning to start? write yes - 1, no - 0\n");
			scanf("%d", &kid3);
			if (kid3 == 1)
			{
				printf("Good, how many you want?\n");
				scanf("%d", &kid4);
				printf("It's cool\n");
			}
			else if (kid3 == 0)
			{
				printf("Why? :(\n");
				scanf("%s", reason);
			}
			
		}
	}
	int elsekid;
	int elsekidold;
	char reason1[100];
	if (old < 25)
	{
		printf("Do you want to children? write yes - 1, no - 0\n");
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
			scanf("%s", reason1);
		}

	}
}
