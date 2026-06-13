#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, inicio, fim;    

    printf("Digite o o numero de partida: \n");
    scanf("%d", &inicio);

    printf("Digite o numero de chegada: \n");
    scanf("%d", &fim);

    if (fim>0)
    {
        
        printf("listando...\n");
        
        for (i = inicio; i <= fim; i++){printf("%d\n", i);}
    
    }
    else
    {

        printf("Listando..\n");

        for(i=inicio; i >= fim; i--){printf("%d\n", i);}

    }

}