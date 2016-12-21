#include<stdio.h>
#include<stdlib.h>

void return_STATS_AGAIN()
{
	fflush(stdin);
	printf("Chose between this two options:\nOption 1: Continue\nOption 2: Introduce stats again");
	int option = 0;
	while (option == 0)
	{
		scanf_s("%d", &option);
		switch (option)
		{
		case 1:
			printf("Perfect. Let's enter to the dungeon");
			break;
		case 2:
			system("cls");
			printf("As you wish. Let's cheat the hero again");
			break;
		default:
			printf("Chose between 1 and 2 little bastard ;) ");
			break;
		}
	}
}