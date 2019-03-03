
// Monster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include "Monster.h"
using namespace std;

	int Monster::getHitPoints()
	{
		return hitPoints;
	}

	int Monster::setHitPoints(int hitpoints) {
		hitPoints = hitpoints;
	}

	int Monster::getAttackPower()
	{
		return attackPower;
	}

	void Monster::description() {
		if (attackPower == 1) {
			cout << "a hairy, mean looking ape." << endl;
		}
		else
		{
			cout << "a large ape with red glowing eyes." << endl;
		}
	}

	int Monster::setInitialHitPoints() {
		// Randomly generataes a number from 1 to 15
		int roll;
		srand(time(NULL));
		roll = (rand() % 15) + 1;	
		return roll;
	}

	int Monster::setAttackPower() {
		// Randomly generataes a number from 1 to 15
		int roll;
		srand(time(NULL));
		roll = (rand() % 15) + 1;	
		return roll;
	}
