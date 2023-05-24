/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Processamento exercicio 02

*/

// funções de processamento

void inverter_vetor(float *v1, float *v2, int quant_itens)
{
    int i, j = quant_itens - 1;
    
    for(i = 0; i < quant_itens; i++, j--)
    {
        v2[i] = v1[j];
    }
}
