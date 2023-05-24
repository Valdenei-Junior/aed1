/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    int i; 
    float media, vetor_notas[4];
    
    // entrada de dados
    for(i = 0; i < 5; i++)
        scanf("%f", &vetor_notas[i]);

    // processamento dos dados
    media = calcular_media(vetor_notas, 4);

    // saida
    printf("%.1f\n", media);

    return 0;
}
