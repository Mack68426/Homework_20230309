#include "family.h"
#include <algorithm>

namespace {
	bool human_name_comparator(const human& h1, const human& h2) {
		return h1.name().length() < h2.name().length();
	}
}



void family::add_member(human hm)
{
	m_members.push_back(std::move(hm));
}

const human& family::longest_name_member() const
{

	return *std::max_element(m_members.cbegin(), m_members.cend(), &human_name_comparator);
	/*
	std::string longest_name = m_members[0].name();
	
	for (int i = 1; i < m_members.size(); ++i)
	{
		if (m_members[i].name().length() > longest_name.length())
		{
			longest_name = m_members[i].name();
		}
	}
	
	return longest_name;
	*/

}

// use std::any_of()
bool family::has_member_with_name(std::string name) const
{
	for (auto member : m_members)
	{
		if (member.name().compare(name) == 0)
			return true;
	}
	
	return false;
}