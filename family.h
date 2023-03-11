#pragma once

#include "human.h"
#include <utility>
#include <vector>

class family
{
public:
	family();
	// family(std::vector<human>);
	family(const human&);

	void add_member(human member);
	std::string longest_name_member() const;
	bool has_member_with_name(std::string);
private:
	std::vector<human> m_members;
};
