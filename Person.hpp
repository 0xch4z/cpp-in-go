#include <iostream>
#include <string>
#include <numeric>

#pragma one

class cxxPerson {
	std::string _first_name, _last_name;
	uint8_t _age;
public:
	cxxPerson(const std::string&, const std::string&, const uint8_t&);
	std::string full_name() const;
};
