/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

// funções de processamento

int eh_par(int num)
{
    if(num % 2 == 0)
        return 1;
    
    return 0;
}

void preencher_vetores(int *v, int *p, int *ip, int *elementos, int quant_v)
{
    int i, num_atual, indice_p = 0, indice_i = 0; 
    int quant_par, quant_impar;

    for(i = 0; i < quant_v; i++)
    {
        num_atual = v[i];

        if(eh_par(num_atual))
        {
            p[indice_p] = num_atual;
            indice_p++;
        }
        else
        {
            ip[indice_i] = num_atual;
            indice_i++;
        }
    }

    // os indices controlam o indice atual de cada vetor
    // ao final do laço eles reflete a quantidade de elementos em cada vetor
    quant_par = indice_p;
    quant_impar = indice_i;

    /*
    como os vetores par e impar podem não ser preenchidos completamente
    o vetor elementos guarda a quantidade de elementos em cada vetor, par(0) e impar(1)
    */

    elementos[0] = quant_par;
    elementos[1] = quant_impar;
}

void mostra_vetor(int *vetor, int quant)
{
    int i;

    for(i = 0; i < quant; i++)
        printf("%d ", vetor[i]);
    
    printf("\n");
}