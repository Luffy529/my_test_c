#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int T[5] = {3, -6, 14, 8, 24};

	int *p = T;

	int *q = &T[3];

	printf("%d\n", q == p);
	printf("%d\n", q >= p);
	printf("%d\n", *p);

	return (0);
}
