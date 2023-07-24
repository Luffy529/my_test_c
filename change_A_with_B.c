#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int A, B, C;

        printf("entrer la valeur de A : ");
        scanf("%d", &A);
        printf("entrer la valeur de B : ");
        scanf("%d", &B);
        C = A;
        A = B;
        A = C;
        printf("A = %.2d\n",A);
        printf("B = %.2d\n",B);
        getch();


    return 0;
}