#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int N = 0;
    int random;
    int nomberTentative = 0;
    int estcorect = 0;
    const int MAX = 20, MIN = 1;
    srand(time(NULL));
    random = (rand() % (MAX - MIN + 1)) + MIN;

    printf ("ordinator choisi un nombre entre 1 et 30. a vous de la deviner en 5 tentatives au maximum\n");

    do{
        nomberTentative++;
        printf ("Quel est le nombre ?:\n");
        scanf ("%d",&N);
    if (N<random)
        printf ("C'est plus !\n");
    else if (N>random) 
        printf ("C'est mois !\n");
    else{
        estcorect=1;
        break;
    }

    } while (nomberTentative<6);
    if (estcorect==1)
        printf ("Bravo! VOus avez trouve %d en %d essais",random,nomberTentative);
    else
        printf ("oups! vous avez depasse les 6 essais. le nombre est :%d",random);

    return 0;
}