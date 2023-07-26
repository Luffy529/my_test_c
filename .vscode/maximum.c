#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A, B;

        printf("enter a number A : ");
            scanf("%f", &A);
        printf("enter a number B : ");
            scanf("%f", &B);
           if (A > B) 
            printf("le maximum est : %.2f\n", A);
        else 
        printf("le maximum est : %.2f\n", B);

    return 0;
}