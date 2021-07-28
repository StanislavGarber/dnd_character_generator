#pragma once
#include<time.h>
#include<iostream>
#include "dicebox.h"
using namespace std;

int dices[7] = {4, 6, 8, 10, 12, 20, 100};

string barbarian[6] = { "str", "con", "dex", "wis", "cha", "int" };
string bard[6] = { "cha", "dex", "int", "wis", "str", "con" };
string cleric[6] = { "wis", "con", "str", "int", "dex", "cha" };
string druid[6] = { "wis", "con", "cha", "str", "int", "dex" };
string fighter[6] = { "str", "con", "dex", "int", "wis", "cha" };
string monk[6] = { "dex", "wis", "str", "int", "cha", "con" };
string paladin[6] = { "str", "cha", "con", "dex", "int", "wis" };
string ranger[6] = { "dex", "wis", "cha", "int", "con", "str" };
string rogue[6] = { "dex", "int", "cha", "wis", "str", "con" };
string sorcerer[6] = { "cha", "con", "wis", "int", "str", "dex" };
string warlok[6] = { "cha", "con", "wis", "int", "str", "dex" };
string wizard[6] = { "int", "con", "dex", "cha", "wis", "str" };

string random_race() {
	string common_races[7] = { "human", "dwarf", "high elf", "dark elf", "wood elf", "lightfoot halfing", "stout halfing"};
	string uncommon_races[5] = { "dragonborn", "gnome", "half-elf", "half-orc", "tiefling" };
	return common_races[rand() % 7];
}

string random_class() {
	string classes[12] = { "barbarian", "bard", "cleric", "druid", "fighter", "monk", "paladin", "ranger", "rogue", "sorcerer", "warlok", "wizard" };
	return classes[rand() % 12];
}

void roll_ability(int four_roll_results[]) {
	int min = 0;
	for (int i = 0; i < 4; i++) {
		int roll_1d6 = throw_dices(1, 6);
		if (min == 0) {
			min = roll_1d6;
		}
		else {
			if (roll_1d6 <= min) {
				four_roll_results[i] = min;
			}
			else {
				four_roll_results[i] = roll_1d6;
			}
		}
	}
}

void roll_abilities(int abilities[]) {
	for (int i = 0; i < 6; i++) {
		int four_roll_results[4] = {};
		roll_ability(four_roll_results);
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			sum += four_roll_results[i];
		}
		cout << sum << endl;
		abilities[i] = sum;
	}
}


class Character {
public:
	int str;
	int con;
	int dex;
	int intl;
	int wis;
	int cha;
};


int main() {
	srand(time(NULL));
	string a_race, a_class;
	int abilities[6] = {};
	a_race = random_race();
	a_class = random_class();
	cout << a_race <<  " " << a_class << endl;
	roll_abilities(abilities);
}
