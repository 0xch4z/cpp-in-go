#include <string>
#include <numeric>

#include "Person.hpp"
#include "Person.h"

Person person_init(const char* first_name, const char* last_name, const uint8_t age) {
  cxxPerson *newPerson = new cxxPerson(first_name, last_name, age);
  return (void*)newPerson;
}

void person_free(Person p) {
  cxxPerson *pp = (cxxPerson*)p;
  delete pp;
}

const char* person_full_name(Person p) {
  cxxPerson *pp = (cxxPerson*)p;
  return pp->full_name().c_str();
}
