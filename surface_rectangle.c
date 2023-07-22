#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, L, perimetre, surface;
        printf("entrer largeur et longeur : ");
        scanf("%f %f", &l, &L);
    perimetre = (l+L)*2;
    surface = l * L;
        printf("Surface is : %.2f",surface);
        printf("perimetre is : %.2f",perimetre);


    return 0;

}