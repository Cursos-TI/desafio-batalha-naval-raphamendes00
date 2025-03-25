#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int matriz[10][10] = {0};
    int navio[3] = {3};
    int navio1[3] = {3};
    int navio2[3] = {3};
    int navio3[3] = {3};
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            //Representação dos dois primeiros navios
            if (j == 1 && (i == 0 || i == 1 || i == 2)) 
            {
                matriz[i][j] = navio[0];
            }
            else if (i == 6 && (j == 6 || j == 7 || j == 8 ))
            {
                matriz[i][j] = navio1[0];
            }
            //Representação dos navios em diagonal
            else if ((i == 0 && j == 6) || (i == 1 && j == 5) || (i == 2 && j == 4))
            {
                if (matriz[0][6] == 0 || matriz[1][5] == 0|| matriz[2][4] == 0)
                {
                    matriz[i][j] = navio2[0];
                }
            }
            else if ((i == 9 && j == 2) || (i == 8 && j == 3)|| (i == 7 && j == 4))
            {
                if (matriz[9][2] == 0 || matriz[8][3] == 0|| matriz[7][4] == 0)
                {
                    matriz[i][j] = navio3[0];
                }
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
