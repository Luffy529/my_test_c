#include <stdio.h>


int main()
{
	int T[10];
	int S;
	int *P;
	P = &T[0];// P = T
printf("entrer les elements du tableau : \n");
printf("hh %d\n",T-P);
for (P = T; P < T + 6; P++){
	printf("T[%d] = ", P-T);
	scanf("%d", P);
}
S=0;
for (P = T; P < T+6; P++)
	S = S + *P;
	printf("la some = %d", S);


	return 0;
}