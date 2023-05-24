/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

// funções de processamento

/*float calcular_media(float *notas, int quant_notas)
{
    int i;
    float soma = 0; media;

    for(i = 0; i < quant_notas; i++)
        soma += notas[i];
    
    media = soma / quant_notas;

    return media;
}*/

void calcular_medias(float vn[10][4], float *vm, int quant_vetores, int quant_elementos)
{
    int i, j;
    float soma, media;

    for(i = 0; i < quant_vetores; i++)
    {
        soma = 0;
        media = 0;

        for(j = 0; j < quant_elementos; j++)
            soma += vn[i][j];

        media = soma / quant_elementos;
        vm[i] = media;
    }
}
