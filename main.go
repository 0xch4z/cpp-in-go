package main

/*
#include "Person.h"
*/
import "C"

import "fmt"

func main() {
	me := C.person_init(C.CString("charles"), C.CString("kenney"), 19)
	defer C.person_free(me)

	fmt.Printf("foo->full_name() => %s", C.GoString(C.person_full_name(me)))
}
