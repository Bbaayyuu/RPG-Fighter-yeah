#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "String.h"
#include "creatures.h"
#include <conio.h>
#include "Map and arrows.cpp"
#include <windows.h>
#include <iostream>
#include "Return.cpp"

int get_value_within_range(int min, int max, int value);

using namespace std;
bool gameOver;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, UP, DOWN, RIGHT, LEFT };
eDirection dir;


int main()
{
	
	system("COLOR 7C");
	system("COLOR 7C");
	// Game Story.
	
	printf_s("_______________________________________________________________________________________________________________________\n\nSTORY:\n\nIn a far, fantasy world, chaos is emerging from the interior of the ground, killing some vital herbs for the survabilityof the humans,evaporing nearly all the water of the river and making the ground poisoned.\nFor this reason, the reialm of Minabo have praised the gods for the arriving of a hero. An here is were your journey beggins, bravely hero.\nYou will have to enter the deepest dungeon it's ever seen and kill the black mage. You would also encounter terrorrific enemies and mortal dangers.\nPrepare yourself...\n________________________________________________________________________________________________________________________\n\nBut first, can you tell me your name: ");

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

	printf_s("\n%s seems to be a huge tank with a lot of health, with an unbreakable armor and more damage than the best warior of the reialm.\n________________________________________________________________________________________________________________________\nIntroduce the stats for the hero that will become a legend", hero.name);

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
	printf("\n_____________________________________________________________________________________________________________\nSo you decided that your hero would have this stats no??\n%d hp\n%d-%d atck,\n%d armor\n%d speed\n", hero.combat.hp, hero.combat.attack_min, hero.combat.attack_max, hero.combat.armor, hero.combat.speed);
	
	return_STATS_AGAIN();

	Setup();
	while (!gameOver)
	{
		dir = STOP;
		Input();
		Logic();
		Sleep(40);
	}

	

	






























	fflush(stdin);
	getchar();
	return 0;
}
void Setup()
{
	gameOver = false;
	dir = STOP;

}

void Logic()
{
	switch (dir)
	{
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	case RIGHT:
		x++;
		break;
	case LEFT:
		x--;
		break;
	case STOP:
		break;
}

	void Input()
	{
		fflush(stdin);
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'a':
				dir = LEFT;
				break;
			case 'd':
				dir = RIGHT;
				break;
			case 'x':
				gameOver = true;
				break;
			case 'w':
				dir = UP;
				break;
			case 's':
				dir = DOWN;
				break;
			}
		}
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