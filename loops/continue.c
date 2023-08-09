#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, S, N;
    S=0;
    for(i=1; i<=8;i++){
        printf ("entrez N%d :", i);
        scanf ("%d", &N);
        if (N<0)
        continue;
        S=S+N;
    }
        printf ("La somme est : %d ", S);




    return 0;
}