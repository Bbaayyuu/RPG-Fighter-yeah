#ifndef __CREATURES_H__
#define __CREATURES_H__


// find here the manin data structure for the game
// feel free to expand it to suit your improvements

struct combat_data
{
	int hp;
	int attack_min;
	int attack_max;
	int armor;
	int speed;
};

struct hero_data
{
	char name[31];
	struct combat_data combat;
	int coins;
	int xp;
};

struct monster_data
{
	struct combat_data combat;
	int coins;
	int xp;
};

#endif // __CREATURES_H__