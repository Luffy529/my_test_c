#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int T[5] = {3, 7, 14, 8, 24};

	int *p = T;

	int *q = &T[3];

	printf("%p\n", q - 2);
	printf("%d\n", *(q - 2));
	printf("%p\n", &T[1]);

	return (0);
}
