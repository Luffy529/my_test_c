#include <stdio.h>
#include <stdlib.h>

void premier (int N)
{
int estPremier = 1;

int i;

for (i = 2; i <= N / 2; i++)
{
	if (N % i == 0)
	{
		estPremier = 0;
		break;
	}
}
	if (estPremier == 1)
		printf("%d est un nomber prepier\n", N);
	else
	printf("%d n'est pas un nomber prepier\n", N);
}
int main (void)
{
int N;

		printf("enter un nomber N : ");
		scanf("%d", &N);
		premier(N);
		return (0);
}
