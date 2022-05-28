#pragma once
#include <cstdint>
typedef std::uint64_t exptype;
typedef std::uint16_t leveltype;

class LevelSystem {
public:

	static const leveltype LEVEL2AT = 100u;

	LevelSystem() {
		CurrentLevel = 1u;
		CurrentEXP = 0u; 
		EXPToNextLevel = LEVEL2AT;
	}

	void gainEXP(exptype gained_exp) {
		CurrentEXP += gained_exp;
		while(check_if_leveled()) {}
	}

	leveltype getLevel() {
		return CurrentLevel;
	}

	exptype getCurrentEXP() {
		return CurrentEXP;
	}

	exptype getEXPToNextLevel() {
		return EXPToNextLevel;
	}

	virtual void LevelUp() = 0;

protected:
	leveltype CurrentLevel;
	exptype CurrentEXP;
	exptype EXPToNextLevel;

	bool check_if_leveled() {
		static const leveltype LEVELSCALER = 2u;	

		if (CurrentLevel >= EXPToNextLevel) {
			CurrentLevel++;
			LevelUp();
			EXPToNextLevel *= LEVELSCALER;	//When level up, increase amount needed for next level x2.
			return true;
		}
		return false;
	}
};