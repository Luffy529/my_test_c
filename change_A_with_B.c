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
        B = C;
        printf("A = %d\n",A);
        printf("B = %d\n",B);
        getch();


    return 0;
}