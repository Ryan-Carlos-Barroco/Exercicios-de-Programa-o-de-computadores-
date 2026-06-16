#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>


 //Fazer um programa em C que crie, preencha e apresente um vetor de 10 posições de inteiros entre 50 e 150.
//Em seguida calcule e apresente a média dos valores

int main (void)
{
        int i;
        float media, valor[10], total;

        srand(time(NULL));
        SetConsoleOutputCP(65001);
        
        total=0;

        for ( i = 0; i < 10; i++)
        {
                valor[i] = rand()%(150-50+1)+50;

                printf("%.0f\n", valor[i]);

                total += valor[i];


        }

        media = total/i;

        printf("a média de todos os valores é igual é %.2f\n", media);

        return 0; 

}