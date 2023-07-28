#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int T ,H , S, M;
        printf("write the time T : ");
        scanf("%d", &T);
    H = T / 3600;
    M = (T % 3600) / 60;
    S = T % 60;

        printf(" T = %dH %dm %ds",H,M,S);
        getch();


    return 0;
}