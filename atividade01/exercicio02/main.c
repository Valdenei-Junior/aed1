/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Exercicio 02

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    int i;
    float vetor1[10], vetor2[10];

    // entrada de dados
    for(i = 0; i < 10; i++)
        scanf("%f", &vetor1[i]);

    // processamento dos dados
    inverter_vetor(vetor1, vetor2, 10);

    // saida
    for(i = 0; i < 10; i++)
        printf("%.1f\n", vetor2[i]);

    return 0;
}
