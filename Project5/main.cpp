#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"String.h"
#include"creatures.h"

int main()
{
	// Game Srory.
	
	printf_s("In a far, fantasy world, chaos is emerging from interior of the ground, killing some vital herbs for the survability of the humans,\nevaporing nearly all the water of the river and making the ground poisoned.\nFor this reason, the reialm of Minabo have praised the gods for the arriving of a hero. An here is were your journey beggins, bravely hero.\nYou will have to enter the deepest dungeon it's ever seen and kill the black mage. You would also encounter terrorrific enemies and mortal dangers.\nPrepare yourself...\nBut first, can you tell me your name: ");

	// Input hero Info. Name, stats.

	hero_data hero;

	char temp_name[30];
	scanf("%s", temp_name);
	for (int i = 0; i < 30; i++)
	{
		hero.name[i] = temp_name[i];
	}
	hero.name[31] = '\0';

	captalise(hero.name);

	printf_s("%s seems to be a huge tank with a lot of health, with an unbreakable armor and more damage than dragon claws.\nIntroduce the ststa for this hero", hero.name);

	fflush(stdin);
	getchar();
	return 0;
}