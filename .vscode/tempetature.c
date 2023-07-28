#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
        printf("entrer la valeur T : ");
        scanf("%d", &T);
    if (T < 0)
        printf("GLACE\n");
    else if (T>100 )
        printf("VAPEUR\n");
    else
        printf("LIQUIDE\n");
    
}