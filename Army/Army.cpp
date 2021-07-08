
#include <iostream>
#include"C_Weapon_High_Distance.h"
#include"C_Weapon_Low_Distance.h"

int main()
{
    C_Weapon_Low_Distance sword(12, USING_ONE_HANDED);
    std::cout << "Sword:\n" << sword << "\n";
    C_Weapon_High_Distance bow(40);
    std::cout << "Bow:\n" << bow;
}
