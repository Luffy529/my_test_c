#include <stdio.h>
#include <stdlib.h>
void maximum(int *A, int *B, int *max)
{
if (*A > *B)
	*max = *A;
else
	*max = *B;
	}




int main(void)
{
int A, B, max, S=1;

	printf("enter A : ");
	scanf("%d", &A);
	printf("entrer B : ");
	scanf("%d", &B);
	S += 5;
maximum(&A, &B, &max);
	printf("le max des deux valeur est : %d\n", max);
	printf("le : %d\n", S);
	return (0);
}
