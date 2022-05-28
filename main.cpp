#include <iostream>
#include "allclasses.h"


int main() {
    Warrior warr1;
    Wizard wiz1;
    Cleric cler1;
    Rogue rog1;

    for (int i = 0; i < 2; i++) {
        std::cout << "Cleric\n"
            << "-MaxHP: " << cler1.getMaxHp() << "\n"
            << "-Strength: " << cler1.getStrength() << "\n"
            << "-Intellect: " << cler1.getIntellect() << "\n"
            << "- Level: " << cler1.getLevel() << '\n'
            << "-EXP: " << cler1.getCurrentEXP() << "/" << cler1.getEXPToNextLevel() << '\n';
        if (i < 1)
            cler1.gainEXP(100u);
    }
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
        std::cout << "Warrior\n"
        << "-MaxHP: " << warr1.getMaxHp() << "\n"
        << "-Strength: " << warr1.getStrength() << "\n"
        << "-Intellect: " << warr1.getIntellect()<< "\n";

         std::cout << "Wizzard\n"
        << "-MaxHP: " <<wiz1.getMaxHp() << "\n"
        << "-Strength: " <<wiz1.getStrength() << "\n"
        << "-Intellect: " << wiz1.getIntellect()<< "\n";

         std::cout << "ClericHP\n"
        << "-MaxHP: " << cler1.getMaxHp() << "\n"
        << "-Strength: " << cler1.getStrength() << "\n"
        << "-Intellect: " << cler1.getIntellect()<< "\n";


         std::cout << "Rogue\n"
        << "-MaxHP: " << rog1.getMaxHp() << "\n"
        << "-Strength: " << rog1.getStrength() << "\n"
        << "-Intellect: " << rog1.getIntellect()<< "\n";
    return 0;
*/