#include <stdint.h>

#pragma one

#ifdef __cplusplus
extern "C" {
#endif

  typedef void* Person;
  Person person_init(const char[], const char[], const uint8_t);
  void person_free(Person);
  const char* person_full_name(Person);

#ifdef __cplusplus
}
#endif
