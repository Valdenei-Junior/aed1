/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    int i, j;
    float vetor_notas[10][4], vetor_medias[10];

    // entrada de dados
    for(i = 0; i < 10; i++)
        for(j = 0; j < 4; j++)
            scanf("%f", &vetor_notas[i][j]);

    // processamento dos dados
    calcular_medias(vetor_notas, vetor_medias, 10, 4);

    // saida
    for(i = 0; i < 10; i++)
    printf("%.1f\n", vetor_medias[i]);

    return 0;
}
