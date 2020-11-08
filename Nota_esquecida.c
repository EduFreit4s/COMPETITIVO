#include <stdio.h>

int main()
{
    int A, M;
    scanf("%i%i", &A, &M);
    printf("%i", 2*M-A);
    return 0;
}

/*
* João não é muito bom em Matemática, mas aprendeu que a média de dois números
* é o valor da soma desses dois números dividido por dois. Ou seja, a média de
* dois números A e B = (A+B)/2 = M.
* Com apenas os valores de A e M, descubra qual a segunda nota de João.
*
*/
