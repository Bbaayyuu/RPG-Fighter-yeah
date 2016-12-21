#include <windows.h>
#include <iostream>
#include <stdio.h>



using namespace std;
bool gameOver;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, UP, DOWN, RIGHT, LEFT };
eDirection dir;

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