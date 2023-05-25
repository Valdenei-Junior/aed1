/*

    Nome: Valdenei Lopes da Silva Junior
    Mat:  2015310028

    Template

*/

// funções de processamento
void preencher_matriz(int n, int matriz[n][n])
{
    int i, j;

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
}

int checar_linha(int n, int matriz[n][n], int *somas)
{
    int i, j, soma_atual, soma_anterior = 0;

    for(i = 0; i < n; i++)
    {
        soma_atual = 0;

        for(j = 0; j < n; j++)
        {
            soma_atual += matriz[i][j];    
        }
        
        if(soma_anterior)
        {
            if(soma_atual != soma_anterior) return 0;
            else
            {
                soma_anterior = soma_atual;
                continue;
            }
        }
        else
        {
            soma_anterior = soma_atual;
            continue;
        }   
    }

    somas[0] = soma_atual;
    return 1;
}

int checar_coluna(int n, int matriz[n][n],int *somas)
{
    int i, j, soma_atual, soma_anterior = somas[0];

    for(i = 0; i < n; i++)
    {
        soma_atual = 0;

        for(j = 0; j < n; j++)
        {
            soma_atual += matriz[j][i];    
        }
            
        if(soma_atual != soma_anterior) return 0;
        else
        {
            soma_anterior = soma_atual;
            continue;
        }   
    }

    somas[1] = soma_atual;
    return 1;
}

int checar_diagonal_p(int n, int matriz[n][n], int *somas)
{
    int i, j, soma_atual = 0, soma_anterior = somas[1];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if( i == j) soma_atual += matriz[i][j];
        } 
    }

    if(soma_atual != soma_anterior) return 0;

    somas[2] = soma_atual;
    return 1;
}

int checar_diagonal_s(int n, int matriz[n][n], int *somas)
{
    int i, j, soma_atual = 0, soma_anterior = somas[2];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if( j == (n - i - 1)) soma_atual += matriz[i][j];
        }
    }    

    if(soma_atual != soma_anterior) return 0;

    somas[3] = soma_atual;
    return 1;
}

int eh_quadrado_magico(int *v, int n)
{
    int i, controle = v[0];

    if(controle)
    {
        for(i = 1; i < n; i++)
        {
            if(controle != v[i]) return 0;
        }
    }
    else
    {
        return 0;
    }
    
    return 1;
}