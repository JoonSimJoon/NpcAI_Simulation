#include "Main.h"
#include "Mob.h"
#pragma once

std::vector<Mob> Vector_mob[15]; // N번의 학습

void init()
{
	Mob mob;
	for (int i = 0; i < 10; i++) {
		for (int random_cnt = 0; random_cnt < 2; random_cnt++) {
			switch (rand() % 10) {
			case 1:
				mob.Attack_Defand++;
				break;
			case 2:

			}
		}
		Vector_mob[0].push_back(mob);
	}
}
