#pragma once
#include"E_Distance.h"
#include<ostream>
class C_Weapon
{
protected:
	E_Distances distance;
public:
	C_Weapon();
	C_Weapon(E_Distances distance);

	friend std::ostream& operator <<(std::ostream& out, const C_Weapon& obj);
};

