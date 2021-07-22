#pragma once
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

int throw_dice(int dice_facets) {
	int max, dice_throw;
	max = dice_facets;
	dice_throw = rand() % max + 1;
	return dice_throw;
}

int throw_dices(int dices, int dice_facets, bool verbose = false) {
	int sum = 0;
	int dice_result;
	string message = "";
	for (int i = 0; i < dices; i++) {
		dice_result = throw_dice(dice_facets);
		if (verbose) {
			message += " " + to_string(dice_result);
		}
		sum += dice_result;
	}
	if (verbose) {
		cout << dices << " dices were thrown with following results " << message << ", overall result:" << endl;
		cout << sum;
	}
	return sum;
}
