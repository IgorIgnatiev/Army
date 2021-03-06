#include "C_Weapon.h"

C_Weapon::C_Weapon()
{
	this->distance = E_Distances::DISTANCE_LOW;
}

C_Weapon::C_Weapon(E_Distances distance)
{
	this->distance = distance;
}

std::ostream& operator<<(std::ostream& out, const C_Weapon& obj)
{
	if (obj.distance == DISTANCE_HIGH)
	{
		out << "Distance: high\n";
	}
	else
	{
		out << "Distance: low\n";
	}
	return out;
}
