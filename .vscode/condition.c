#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A, B;

        printf("entrer la dividende : ");
            scanf("%f", &A);
        printf("entrer la diviseure : ");
            scanf("%f", &B);
           if (B != 0) 
           {
            printf("la resultat est \n");
        printf("%.2f\n",A / B);
           }

    return 0;
}