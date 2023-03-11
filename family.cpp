#include "family.h"


family::family()
	:m_members(std::vector<human>())
{

}

family::family(const human& hum)
	: family()
{
	m_members.push_back(hum);
}

/*
family::family(human hum)
	: family(std::vector<human>{ hum })
{

}

family::family(std::vector<human> members)
	: m_members(members)
{

}
*/

void family::add_member(human hm)
{
	m_members.push_back(std::move(hm));
}

std::string family::longest_name_member() const
{
	std::string longest_name = m_members[0].name();
	
	for (int i = 1; i < m_members.size(); ++i)
	{
		if (m_members[i].name().length() > longest_name.length())
		{
			longest_name = m_members[i].name();
		}
	}
	
	return longest_name;
}

bool family::has_member_with_name(std::string name)
{
	for (auto member : m_members)
	{
		if (member.name().compare(name) == 0)
			return true;
	}
	
	return false;
}