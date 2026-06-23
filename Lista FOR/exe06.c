#include <stdlib.h> 
#include <stdio.h>
#include <time.h> 
#include <windows.h>

 //Crie, preencha e apresente uma matriz de 6x6 de inteiros com valores aleatórios entre 1 e 9
// em seguida altere os valores da diagonal principal para 0 apresentando o resultado.


int main (void)
{
        int matriz[6][6];
        int random, i, j; 

        srand(time(NULL));
        SetConsoleOutputCP(65001); 

        for (i = 0; i < 6 ; i++)
        {
                random = rand()%9+1;

                for (j = 0; j < 6; j++)
                {
                        matriz[i][j] = random; 

                        printf("%d", matriz[i][j]);
                }
                
                printf("\n");
        }
       
        for (i = 0; i < 6 ; i++)
        {
                matriz[i][i]=0;
                
                printf("%d", matriz[i][j]);
                
                printf("\n");
        }

        
        return 0;
}
