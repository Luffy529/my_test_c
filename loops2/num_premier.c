#include <stdio.h>

int main () {

    int N, i, estPremier ;

    printf ("enter un number : ");
    scanf ("%d", &N);
estPremier = 1;
    for (i = 2; i < N; i++){
    //we can use i < N/2 for better
        if (N%2 == 0){
            estPremier = 0;
            break;
        }
    }
    if (estPremier == 1){
    printf ("le nomber  %d est premier", N);
}
    else 
    printf ("le nomber %d no pas premier", N);





    return 0;
}