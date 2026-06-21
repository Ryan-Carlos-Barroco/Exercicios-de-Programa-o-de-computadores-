#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <Windows.h>

 // Fazer um programa em C que crie, preencha e apresente um vetor de 15 posições de reais entre 0 e 10,0.
//Apresente a frente de cada valor a mensagem aprovado para valores acima de 5,9 e reprovado para os demais valores.

int main(void)
{

        int i;
        float notas[15], media, acumulo=0;
        char resultado[50];

        srand(time(NULL));
        SetConsoleOutputCP(65001);

        for (i = 0; i < 15; i++)
        {
                notas[i] = ((float)rand() / RAND_MAX) * 10.0;

                acumulo += notas[i];
                
                if (notas[i] > 5.9)
                {
                        sprintf(resultado, "O Aluno tirou %.2f, ele está APROVADO!\n", notas[i]);    
                }
                else
                {
                        sprintf(resultado, "O aluno tirou %.2f, ele está REPROVADO!\n", notas[i]);
                }

                
                
                printf("%s", resultado);

        }

        media = acumulo/i;

        printf("o a media das notas da turma é igual a %.2f\n", media);
        

        return 0;

}