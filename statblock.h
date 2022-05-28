#pragma once
#include <cstdint>
typedef std::uint16_t stattype; // 0 to 255
class StatBlock {
public:
	StatBlock() {
		Strength = (stattype)1u;
		Intellect = (stattype)1u;
	}
	explicit StatBlock(stattype s, stattype i) {
		Strength = s;
		Intellect = i;
	}
	stattype getStrength(){ return Strength; }
		stattype getIntellect(){ return Intellect; }
private:
	stattype Strength; 
	stattype Intellect;

protected:
	void increaseStats(stattype s, stattype i) {
		Strength += s;
		Intellect += i;
	}
};