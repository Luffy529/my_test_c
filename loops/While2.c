#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int N , i;
    printf ("entrer un nombre entre 10 et 20 : ");
    scanf ("%d",&N);

        while (N<10 || N>20)
{
    
        if (N<10)
    printf ("Plus petit!\n");
    
    else
       printf ("Plus grand!\n ");
       printf ("entrer un nombre entre 10 et 20 : ");
       scanf ("%d",&N);
}
    printf ("Bravo! vous avez tape un nombre compri entre 10 et 20 it is : %d\n",N);

        return 0;
}