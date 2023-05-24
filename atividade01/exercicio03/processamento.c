/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

// funções de processamento

float calcular_media(float *vetor, int quant_itens)
{
    int i;
    float soma = 0, media;

    for(i = 0; i < quant_itens; i++)
        soma += vetor[i];

    media = soma / quant_itens;

    return media;
}