/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    int i, j, n_aprovados = 0;
    float vetor_notas[10][4], vetor_medias[10];

    // entrada de dados
    for(i = 0; i < 10; i++)
        for(j = 0; j < 4; j++)
            scanf("%f", &vetor_notas[i][j]);

    // processamento dos dados
    calcular_medias(vetor_notas, vetor_medias, 10, 4);
    n_aprovados = quant_aprovados(vetor_medias, 10);
    
    // saida
    printf("%d\n", n_aprovados);

    return 0;
}
