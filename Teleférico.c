#include <stdio.h>

int main()
{
    int A, C, X=0;
    scanf("%i%i", &C, &A);
    do{
        A-=(C-1);
        X++;
    }while(A>0);
    printf("%i", X);
    return 0;
}

/* 
* A turma da faculdade vai fazer uma excursão na serra e todos os alunos e monitores vão tomar um
* teleférico para subir até o pico de uma montanha. A cabine do teleférico pode levar C pessoas no
* máximo, contando alunos e monitores, durante uma viagem até o pico. Por questão de segurança,
* deve haver pelo menos um monitor dentro da cabine junto com os alunos. Por exemplo, se cabem
* C = 10 pessoas na cabine e a turma tem A = 20 alunos, os alunos poderiam fazer três viagens: a
* primeira com 8 alunos e um monitor; a segunda com 6 alunos e um monitor; e a terceira com 6 alunos
* e um monitor.
*
* Dados como entrada a capacidade C da cabine e o número total A de alunos, você deve escrever
* um programa para calcular o número mínimo de viagens do teleférico.
* Se você estiver com muita preguiça hoje, não se preocupe: virando a página você encontra solucões
* para este problema.
*
* Entrada
*
* A primeira linha da entrada contém um inteiro C, representando a capacidade da cabine (2 ≤ C ≤
* 100). A segunda linha da entrada contém um inteiro A, representando o número total de alunos na
* turma (1 ≤ A ≤ 1000).
*
* Saída
*
* Seu programa deve produzir uma única linha com um número inteiro representando o número
* mínimo de viagens do teleférico para levar todos os alunos até o pico da montanha.
*
*/

