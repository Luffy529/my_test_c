#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, D;
        printf("entrer la valeur A : ");
        scanf("%d", &A);
        printf("entrer la valeur B : ");
        scanf(" %d", &B);
    if (A*B>0)
    {
        C = A;
        A = B;
        B = C;
    }
    else{
        C = A + B;
        D = A * B;
        A = C;
        B = D;
    }
        printf("the new value A est : %d\n", A);
        printf("the new value B est : %d", B);



    return 0;
}