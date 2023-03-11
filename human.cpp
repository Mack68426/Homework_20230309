#include "human.h"
#include <utility>
/*
* std::move() :
*	static_cast<type_of_something&&>(something);
*/

human::human(std::string name) // rvalue
	:m_name(std::move(name))
{

}

void human::set_name(std::string name)
{
	m_name = std::move(name);
}

std::string human::name() const
{
	return m_name;
}


std::ostream& operator<<(std::ostream& os, const human& hm)
{
	return os << hm.name();
}