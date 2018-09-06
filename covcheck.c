/*
 * covcheck.c
 *
 * Coverity issue solving scratchpad
 *
 * Copyright (c) 2018 F. Aragon. All rights reserved.
 * Released under the BSD 3-Clause License (see the LICENSE)
 */

#include <inttypes.h>
#include <stdio.h>
#include <string.h>

void frr_1473088(uint32_t c, char *t)
{
	char b1[256], b2[256];

	snprintf(b1, sizeof(b1), "\nError %" PRIu32 " - %s", c, t);
	memset(b2, '=', strlen(b1));
	b2[strlen(b1) - 1] = '\0';

	printf("%s %s\n", b1, b2);
}

int main()
{
	return 0;
}
