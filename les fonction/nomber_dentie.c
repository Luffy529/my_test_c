#include <stdio.h>
#include <stdlib.h>

int entier (int N)
{
int result;

int Nbr;

Nbr = 0;
do {
N = N / 10;
Nbr++ ;
} while (N != 0);

return (Nbr);
}
main (void)
{
int N;

		printf("enter un nomber N : ");
		scanf("%d", &N);
		printf ("le nomber dentier est %d\n", entier(N));
		return (0);
}