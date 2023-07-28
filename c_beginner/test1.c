#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  float prix , chiffre ;
  int qnt ;
  printf("Programme qui calcule le chiffre d'affaires\n");
        printf("Veuillez entrer la quantité de produits vendus: ");
        scanf("%d",&qnt);
        printf("Veuillez entrer le prix de vente : ");
        scanf("%f",&prix);
        chiffre = qnt * prix;
        printf("Le chiffre d'affaires est: %f ", chiffre);
    return 0;

  }

