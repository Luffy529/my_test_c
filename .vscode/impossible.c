#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;

        printf("enter a number : ");
            scanf("%d", &N);
           if (N >= 0) 
            printf("le number %.2d et positive\n", N);
        else 
        printf("le number %.2d et negative\n", N);

    return 0;
}