#include<stdio.h>

char charupper(char character)
{
	if (character >= 97 && character <= 122)
	{
		character = -32;
	}
	return character;
}

char* captalise(char* string)
{
	int counter = 0;
	string[0] = charupper(string[0]);
	for (int i = 0; i != '\0'; i++)
	{
		if (string[i] = 32)
		{
			charupper(string[++i]);
		}
	}
	return string;
}



