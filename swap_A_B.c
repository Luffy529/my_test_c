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
        A = A + B;
        B = A - B;
        A = A - B;
        printf("A = %d\n",A);
        printf("B = %d\n",B);
        getch();


    return 0;
}