#include <stdio.h>
#include <stdlib.h>


float cube (float N)
{
	float C;
C= N*N*N;
return C;
}


int main (void)
{
float N;
printf ("entrer un noubre real N : ");
scanf ("%f", &N);
cube (N);
printf("le cube de %.2f est %.2f\n", N, cube (N));
return 0;

}
