/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char** argv)
{
    int i, matriz[3][3], somas[4], controle[4], quadrado_magico;

    // entrada de dados
    preencher_matriz(3, matriz);

    // processamento dos dados
    controle[0] = checar_linha(3, matriz, somas);
    controle[1] = checar_coluna(3, matriz, somas);
    controle[2] = checar_diagonal_p(3, matriz, somas);
    controle[3] = checar_diagonal_s(3, matriz, somas);
    quadrado_magico = eh_quadrado_magico(controle, 4);

    // saida
    if(quadrado_magico) printf("Quadrado Mágico\n");
    else printf("Não é quadrado mágico\n");

    for(i = 0; i < 4; i++) printf("%d ", controle[i]);
    printf("\n");
    
    return 0;
}
