/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

#include <stdio.h>

// funções de processamento

void preencher_matriz(int m, int n, int matriz[m][n])
{
    int i, j;

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
}

void print_matriz(int m, int n, int matriz[m][n])
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d\t", matriz[i][j]);
        
        printf("\n");
    }   
}

void calcular_produto(int m, int n, int p, matriz_a[m][n], matriz_b[n][p], matriz_c[m][p])
{
    
}