#pragma once
#include<time.h>
#include<iostream>
#include "dicebox.h"
using namespace std;

int dices[7] = {4, 6, 8, 10, 12, 20, 100};

string random_race() {
	string common_races[7] = { "human", "dwarf", "high elf", "dark elf", "wood elf", "lightfoot halfing", "stout halfing"};
	string uncommon_races[5] = { "dragonborn", "gnome", "half-elf", "half-orc", "tiefling" };
	return common_races[rand() % 7];
}


string random_class() {
	string classes[12] = { "barbarian", "bard", "cleric", "druid", "fighter", "monk", "paladin", "ranger", "rogue", "sorcerer", "warlok", "wizard" };
	return classes[rand() % 12];
}


void roll_abilities(int abilities[]) {
	for (int i = 0; i < 6; i++) {
		int roll_3d6 = throw_dices(3, 6);
		abilities[i] = roll_3d6;
	}
}


int main() {
	string a_race, a_class;
	int abilities[6] = {};
	a_race = random_race();
	a_class = random_class();
	cout << a_race <<  " " << a_class << endl;
	roll_abilities(abilities);
	for (int i = 0; i < 6; i++) {
		int number = abilities[i];
		cout << number << endl;
	}
}
