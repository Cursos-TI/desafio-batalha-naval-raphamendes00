#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Permite usar acentos e caracteres como 'ç'

    // Nível Novato - Posicionamento dos Navios
    int matriz[10][10] = {0};
    int navio[3] = {3};
    int navio1[3] = {3};
    int navio2[3] = {3};
    int navio3[3] = {3};
    int cruz[3] = {3};
    int cone[3] = {3};
    int octaedro[3] = {3};

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    printf("Exibindo navios em suas posições no tabuleiro\n");
    printf("=============================================\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            //Representação dos dois primeiros navios
            if (j == 0 && (i == 0 || i == 1 || i == 2)) 
            {
                matriz[i][j] = navio[0];
            }
            else if (i == 8 && (j == 6 || j == 7 || j == 8 ))
            {
                matriz[i][j] = navio1[0];
            }
            //Representação dos navios em diagonal
            else if ((i == 0 && j == 4) || (i == 1 && j == 3) || (i == 2 && j == 2))
            {
                if (matriz[0][6] == 0 || matriz[1][5] == 0|| matriz[2][4] == 0)
                {
                    matriz[i][j] = navio2[0];
                }
                else
                {
                    printf("Posições já selecionadas!");
                }
            }
            else if ((i == 9 && j == 1) || (i == 8 && j == 2)|| (i == 7 && j == 3))
            {
                if (matriz[9][2] == 0 || matriz[8][3] == 0|| matriz[7][4] == 0)
                {
                    matriz[i][j] = navio3[0];
                }
                else
                {
                    printf("Posições já selecionadas!");
                }
            }
            //Habilidades especiais
            else if ((i == 5 && j == 0) || (i == 5 && j == 1) || (i == 5 && j == 2) || (i == 4 && j == 1) || (i == 6 && j == 1))
            {
                matriz[i][j] = octaedro[0];
            }
            else if (i == 6 && (j == 5 || j == 6 || j == 7 || j == 8 || j == 9) || i == 5 && (j == 7 || j == 8 || j == 6) || i == 4 && j == 7)
            {
                matriz[i][j] = cone[0];
            }
            else if (j == 6 && (i == 0 || i == 1 || i == 2 || i == 3 ) || i == 1 && (j == 5 || j == 6 || j == 7))
            {
                matriz[i][j] = cruz[0];
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
