#include <string>
#pragma once

struct Mob {
	int Attack_Defand = 0, Attack_Power = 1, Attack_Speed = 90,
		Avoidancd_Power = 0, Critcal_Rage = 0, Drain_Power = 0, 
		Health_Point = 10, Hit_Rage = 0, Magic_Defand = 0, 
		True_Damage = 0; //10개의 유전형질
	std::string Group;
	float Rate=0;
};

void init();
