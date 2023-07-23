#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float N1, N2, N3, N4, N5;
    float Somme, moyenne;
        printf("entrer les 5 notes : ");
        scanf("%f %f %f %f %f", &N1, &N2, &N3, &N4, &N5);
    Somme = N1 + N2 + N3 + N4 + N5;
    moyenne = (Somme) / 5;
        printf("La somme is : %.2f\n",Somme);
        printf("Le moyeene is %.2f\n",moyenne);


    return 0;
}