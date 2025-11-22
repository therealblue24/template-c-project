#include <stdio.h>
#include <stdlib.h>
#include "foo.h"

int main(int argc, char *argv[])
{
	if(argc != 2) {
		fprintf(stderr, "usage: %s <number>\n", argv[0]);
		return 1;
	}
	printf("Foo %d\n", foo(atoi(argv[1])));
	return 0;
}
