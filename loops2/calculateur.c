#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float A, B;
	int operation;
	char reponse;

	do
	{
		printf("----Calculatrice : Menu----\n");
		printf("1 - Addition.\n");
		printf("2 - Soustraction.\n");
		printf("3 - Multiplication.\n");
		printf("4 - Division.\n");
		printf("5 - reste d'une division entire.\n");
		printf("6 - Puissance.\n");
		printf("Quel calcul veux-tu effectuer?\n");
		scanf("%d", &operation);
		printf("Saisir le premier terme : \n");
		scanf("%f", &A);
		printf("Saisir le deuxieme terme\n");
		scanf("%f", &B);
		switch (operation)
		{
		case 1:
				printf("le resultat est %.2f \n", A + B);
			break;
		case 2:
				printf("le resultat est %.2f \n", A - B);
			break;
		case 3:
				printf("le resultat est %.2f \n", A * B);
			break;
		case 4: if (B!=0){
				printf("le resultat est %.2f \n", A / B);
				break;
		}
		else
		{
				printf("Impossible de diviser par 0\n");
			break;
		}
		case 5:
				printf("le resultat est %.2d", (int)A % (int)B);
			break;
		case 6:
				printf("le resultat est %.2f", pow(A, B));
			break;
			default:
			printf("not found\n");
			break;
		}

		printf("Vous tu faire un autre calcul (O/N)?\n");
		scanf(" %c", &reponse);
	} while (reponse != 'N');
	return 0;
}