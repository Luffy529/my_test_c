#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
        printf("write a nuber betwen 1 and 7 : ");
        scanf("%d", &N);
    switch (N)
    {
    case 1: printf("Lundi");
        break;
    case 2: printf("Mardi");
        break;
    case 3: printf("Mercredi"); 
        break;
    case 4: printf("Jeudi");
        break;
    case 5: printf("Vendredi");
        break;
    case 6: printf("Samedi");
        break;
    case 7: printf("Dimanche");
        break;
    default: printf("Unknown");
        break;
        return 0;   
}
}