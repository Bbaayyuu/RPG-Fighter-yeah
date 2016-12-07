#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "creatures.h"

int main()
{
	// Use this file to add the main flow of code. 
	// Keep it clean using creatures.cpp to create utility functions
	// Remember to free all allocated memory with malloc
	hero_data hero;

	printf_s("Put the name of the hero:");
	fflush(stdin);
	char temp_name[30];
	scanf("%s", temp_name);
	for (int i = 0; i < 30; i++)
	{
		hero.name[i] = temp_name[i];
	}
	hero.name[31] = '\0';
	getchar();
	return 0;
}