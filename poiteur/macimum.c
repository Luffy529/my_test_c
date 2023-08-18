#include <stdio.h>
#include <stdlib.h>
void maximum (int *x, int *y, int *m)
{
if (*x > *y)
    *m= *x;
else
    *m= *y;
    }




int main()
{
int A, B, max;
    printf("enter A : ");
    scanf("%d", &A);
    printf("entrer B : ");
    scanf("%d" , &B);
maximum (&A, &B, &max);
    printf("le max des deux valeur est : %d",max);

    return 0;
}
