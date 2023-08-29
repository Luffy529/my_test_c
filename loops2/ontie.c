#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int N, Nbr = 0;
	printf("Entrez un nombre N : ");
	scanf("%d", &N);
	do {
	N = N / 10;
	Nbr++;

} while (N != 0);
printf("le nombre de entier est %d\n", Nbr);
	return (0);
}