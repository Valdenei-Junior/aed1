/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    int i, vetor[20], par[20], impar[20], indices[2];

    // entrada de dados
    for(i = 0; i < 20; i++)
        scanf("%d", &vetor[i]);

    // processamento dos dados
    preencher_vetores(vetor, par, impar, indices, 20);
    
    // saida
    mostra_vetor(vetor, 20); 
    mostra_vetor(par, indices[0]);
    mostra_vetor(impar, indices[1]);

    return 0;
}
