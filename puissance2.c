#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float X, Y, puissance;

        printf("entrer la valeur de X et Y : ");
        scanf("%f %f", &X, &Y);
    puissance = pow(X, Y);
        printf("puissance is : %.2f\n",puissance);
        getch();


    return 0;
}