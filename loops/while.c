#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int N , i;
    printf ("entrer un nombre : ");
    scanf ("%d",&N);

        while (N<0 || N>10)
    {
    printf ("entrer un nombre : ");
    scanf ("%d",&N);
    }
    /*we can use boucle "for()"*/
    i=0;
    while(i<=10)
    {
    printf ("%d x %d = %d \n",i,N,i*N);
    i++;
    }
        return 0;
}