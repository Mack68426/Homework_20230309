#pragma once

#include <string>
#include <ostream>

class human
{
public:

	explicit human(std::string);

	std::string name() const;

	void set_name(std::string);
	// void set_name(std::string&&); // rvalue reference

private:
	int m_age;
	std::string m_name;
};

std::ostream& operator<<(std::ostream&, const human&);