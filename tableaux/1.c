#include <stdio.h>

int main()
{
    int i;
float T[4];
float S, M;
for(i=0;i<4;i++){
printf("entrer la note de l'etudiant num %d :",i + 1 );
scanf("%f",&T[i]);
}
S = 0;
for (i=0;i<4;i++)
S=S+T[i];
M = S / 4;
printf("la moyen est : %.2f\n",M);

return 0;
}