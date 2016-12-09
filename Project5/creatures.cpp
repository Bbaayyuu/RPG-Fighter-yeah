#include"creatures.h"
#include"String.h"
#include<stdio.h>
// Use this file to add all utility functions, like calculating combat results
typedef struct hero_data hero_data;
typedef struct combat_data combat_data;
typedef struct monster_data monster_data;

void hero_stats(hero_data*hero)
{
	printf("Introduce Health stats (500-1000):");
	scanf_s(%i,  );
	printf("\nIntroduce Armor (5-7):");
	scanf_s(%i, );
	printf("\nIntroduce Min.Damage (10-15):");
	scanf_s(%i, );
	printf("\nIntroduce Max.Damage (30-50):");
	scanf_s(%i, );
}