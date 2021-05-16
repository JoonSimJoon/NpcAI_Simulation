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
				mob.Attack_Defand+=5;
				break;
			case 2:
				mob.Attack_Power++;
				break;
			case 3:
				mob.Attack_Speed += 5;
				break;
			case 4:
				mob.Avoidancd_Power++;
				break;
			case 5:
				mob.Critcal_Rage += 10;
				break;
			case 6:
				mob.Drain_Power += 5;
				break;
			case 7:
				mob.Health_Point += 5;
				break;
			case 8:
				mob.Hit_Rage += 5;
				break;
			case 9:
				mob.Magic_Defand += 5;
				break;
			case 0:
				mob.True_Damage += 5;
				break;
			}
		}



		Vector_mob[0].push_back(mob);
	}
}
