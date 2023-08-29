#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int N, Inverse = 0, save;
	printf("Entrez un nombre N : ");
	scanf("%d", &N);
	save = N;
	do {
	Inverse = (Inverse * 10) + (N % 10);
	N = N / 10;
	} while (N != 0);

	if (Inverse == save)
	printf("le nomber %d est palindrome\n", save);
	else
	printf("le nomber %d n'est pas palindrome\n", save);

	return (0);
}