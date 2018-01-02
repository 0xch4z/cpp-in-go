#include "Person.hpp"

cxxPerson::cxxPerson(const std::string &fn, const std::string &ln, const uint8_t &a) {
  _first_name = fn;
  _last_name = ln;
  _age = a;
}

std::string cxxPerson::full_name() const {
  return _first_name + " " + _last_name;
}
