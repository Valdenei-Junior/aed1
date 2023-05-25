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

// vn = vetor de notas
// vm = vetor de medias

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

int verificar_aprovacao(float media)
{
    if(media >= 7.0)
        return 1;
    
    return 0;
}

int quant_aprovados(float *vm, int quant_elementos)
{
    int i, aprovados = 0;

    for(i = 0; i < quant_elementos; i++)
    {
        aprovados += verificar_aprovacao(vm[i]);    
    }

    return aprovados;
}
