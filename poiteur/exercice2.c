#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};

int *P;
P = A;
for (int i = 0; i < 9; i++)
printf("%p\n",&A[i]);
printf("%d\n",P);
printf("%d\n",&A[0]);

return 0;
}