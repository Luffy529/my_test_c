#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    float Xa ,Xb, Ya, Yb, Ds;

        printf("entrer les cordoner de point A : ");

        scanf("%f %f", &Xa, &Xb);
        printf("entrer les cordoner de point B : ");

        scanf("%f %f", &Ya, &Yb);
        Ds = sqrt(pow(Xb - Xa , 2) + pow(Yb - Ya , 2));
        printf("A = %d\n",Ds);
        getch();


    return 0;
}