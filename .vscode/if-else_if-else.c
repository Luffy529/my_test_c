#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
        printf("entrer un number N : ");
        scanf("%d", &N);
    if (N > 0)
    {
        printf("N et positive\n");
    }
    else if (N == 0 )
    {
        printf("N et NULL\n");
    }
    else
    {
        printf("N et negative\n");
    }
}