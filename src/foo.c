#include "foo.h"

int foo(int foo)
{
	int bar = foo << 1;
	int baz = bar * foo;
	return (bar ^ baz);
}
