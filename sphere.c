#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    float r, Volume;

        printf("entrer la valeur de r : ");
        scanf("%f", &r);
    Volume = (4 * 3.14 * pow(r , 3 )) / 3;
        printf("Volume et : %.2f\n",Volume);
        getch();


    return 0;
}