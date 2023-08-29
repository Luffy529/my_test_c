#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int N, Inverse = 0;
	printf("Entrez un nombre N : ");
	scanf("%d", &N);

	do {
	Inverse = (Inverse * 10) + (N % 10);
	N = N / 10;
	} while (N != 0);
	printf("Inverse est %d\n", Inverse);


	return (0);
}