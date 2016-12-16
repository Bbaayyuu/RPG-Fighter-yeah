#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "String.h"
#include "creatures.h"
#include <conio.h>
#include "Map and arrows.cpp"
#include <windows.h>
#include<iostream>

int get_value_within_range(int min, int max, int value);


int main()
{
	system("COLOR 7C");
	system("COLOR 7C");
	// Game Story.
	
	printf_s("In a far, fantasy world, chaos is emerging from the interior of the ground, killing some vital herbs for the survabilityof the humans,evaporing nearly all the water of the river and making the ground poisoned.\nFor this reason, the reialm of Minabo have praised the gods for the arriving of a hero. An here is were your journey beggins, bravely hero.\nYou will have to enter the deepest dungeon it's ever seen and kill the black mage. You would also encounter terrorrific enemies and mortal dangers.\nPrepare yourself...\nBut first, can you tell me your name: ");

	// Input hero Info. Name, stats.

	hero_data hero;

	char temp_name[30];
	fflush(stdin);
	scanf_s("%s", temp_name, 31);
	for (int i = 0; i < 30; i++)
	{
		hero.name[i] = temp_name[i];
	}
	hero.name[31] = '\0';

	captalise(hero.name);

	printf_s("%s seems to be a huge tank with a lot of health, with an unbreakable armor and more damage than the best warior of the reialm.\nIntroduce the stats for this hero to become a legend", hero.name);

	int input_val;
	printf("\nHealth stats (500-1000):"); 
	scanf_s("%d", &input_val);
	hero.combat.hp = get_value_within_range(500, 1000, input_val);
	printf("\nArmor (5-7):");
	scanf_s("%d", &input_val);
	hero.combat.armor = get_value_within_range(5, 7, input_val);
	printf("\nMin.Damage (10-15):");
	scanf_s("%d", &input_val);
	hero.combat.attack_min = get_value_within_range(10, 15, input_val);
	printf("\nMax.Damage (30-50):");
	scanf_s("%d", &input_val);
	hero.combat.attack_max = get_value_within_range(30, 50, input_val);
	printf("\nSpeed (15-20):");
	scanf("%d", &input_val);
	hero.combat.speed = get_value_within_range(15, 20, input_val);
	
	//int number_goblins = ran % 5 + 2;

	






























	fflush(stdin);
	getchar();
	return 0;
}

int get_value_within_range(int min, int max, int value)
{
	if (value < min)
	{
		value = min;
	}
	else if (value > max)
	{
		value = max;
	}
	return value;
}