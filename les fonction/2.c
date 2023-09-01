#include <stdio.h>
#include <stdlib.h>
int N = 6;
/**
 * puissance - Calculates the square of an integer.
 *
 * This function takes an integer N as a parameter and calculates
 * the square of N.
 *
 * @param N The integer whose square is to be calculated.
 * @return The square of the input integer.
 */

	int puissance(int N)
	{
		int P;
		P = N * N;

return (P);
	}
/**
* puissance - Calculates the square of an integer.
 *
 * This function takes an integer N as a parameter and calculates
 * the square of N.
 * Description : main function
 * @param N The integer whose square is to be calculated.
 * @return The square of the input integer.
 */

	int main(void)
	{

		int result;
		result = puissance(N);
		printf("%d\n", result);
		return (0);
	}