#include <stdio.h>
#include <stdlib.h>

	int A, B;
void signe (){
if (A * B > 0)
    printf("les valeure A et B on le meme signe \n");
else
    printf("les valeure A et B on des signe defferents \n");
}
int minimum (){
    int min ;
    if (A>B)
        min = B;
    else
        min = A;
    return min ;

}
int maximum (){
	int max ;
    if (A>B)
        max = A;
    else
        max = B;
    return max ;
}

int main ()
{
    int max , min;
    printf ("ecrire number A : ");
    scanf ("%d", &A);
    printf ("ecrire number B : ");
    scanf ("%d", &B);
    signe(A, B);
    min = minimum(A, B);
    max = maximum(A, B);
        printf ("le minumale est : %d\n", min);
        printf ("le maximale est : %d\n", max);
        return 0;
}