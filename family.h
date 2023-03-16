#pragma once

#include "human.h"
#include <utility>
#include <vector>

class family
{
public:
	family() = default;
	family(const human&);

	bool operator()(std::string) const;

	void add_member(human member);
	const human& longest_name_member() const;
	bool has_member_with_name(std::string) const;
private:
	std::vector<human> m_members;
};
