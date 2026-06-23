#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct produto
{
       char nome[50];

       float preco; 
};


int main(void)
{
        SetConsoleOutputCP(65001);

        struct produto p[3];

        int i; 

        for (i = 0 ; i < 3 ; i++)
        {

                printf("nome: ");
                fflush(stdin);
                fgets(p[i].nome, sizeof(p[i].nome), stdin);

                printf("preco: ");
                scanf("%f", &p[i].preco);

        }
        


}