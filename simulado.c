#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

struct equipamento
{
        int codigo;
        
        char tipo[30];

        int vida_util; 

        int quant_disp;


};

int main(void)
{
        srand(time(NULL));
        SetConsoleOutputCP(65001);

        int i, j; 

        int numero;

        struct equipamento equip[145];

        struct equipamento aux;

        float mediag, media1, media2, media3; 

        float acmg=0, acm1=0, acm2=0, acm3=0;
        
        float qtd1=0, qtd2=0, qtd3=0, qtdm=0;

        float porcent1, porcent2, porcent3, porcentm;


        

        for (i = 0 ; i < 145 ; i++)
        {
                equip[i].vida_util = rand()%(240 - 12 + 1) + 12; 

                equip[i].quant_disp = rand()%50;

                equip[i].codigo = 5000 + i; 

                numero = rand()%3+1;

                acmg += equip[i].vida_util;

                if (numero == 1)
                {                
                        sprintf(equip[i].tipo, "Equipamento de Segurança");
                        acm1 += equip[i].vida_util; 
                        qtd1++;
                }
                else if (numero == 2)
                {

                        sprintf(equip[i].tipo, "Ferramentar Elétricas");
                        acm2 += equip[i].vida_util;
                        qtd2++;
                }
                else
                {

                        sprintf(equip[i].tipo, "Equipamentos de Elevação");
                        acm3 += equip[i].vida_util;
                        qtd3++; 

                }

                if(equip[i].vida_util<36){qtdm++;}
        }

        media1 = acm1/qtd1;

        media2 = acm2/qtd2;

        media3 = acm3/qtd3;

        mediag = acmg/(float)i;

        porcent1 = (qtd1/(float)i)*100;

        porcent2 = (qtd2/(float)i)*100;

        porcent3 = (qtd3/(float)i)*100;

        porcentm = (qtdm/(float)i)*100;



        printf("------------------- Lista de Equipamentos -------------------\n");
        printf("%-8s | %-25s | %-20s | %-35s \n", "CODIGO", "TIPO DO EQUIPAMENTO", "VIDA UTIL ESTIMADA", "QUANTIDADE DISPONÌVEL");

        for(i = 0 ; i < 145; i++)
        {

                printf("%-8d | %-25s | %-20d meses | %-35d\n", 
                
                        equip[i].codigo,
                        equip[i].tipo,
                        equip[i].vida_util,
                        equip[i].quant_disp
                );

        }

        printf("\n");
        
        for (i = 0 ; i < 144; i++) //ordenardor BUBBLE SORT 
        {
                for(j = i + 1 ; j < 145 ; j++)
                {

                        if (equip[i].quant_disp < equip[j].quant_disp )
                        {
                               aux = equip[i];
                               equip[i] = equip[j];
                               equip[j] = aux;

                        }
                }
        }

        
        printf("------------------- Ordenando pela quantidade -------------------\n");
        printf("%-8s | %-25s | %-20s| %-35s \n", "CODIGO", "TIPO DO EQUIPAMENTO", "VIDA UTIL ESTIMADA", "QUANTIDADE DISPONÌVEL");




        for(i = 0 ; i < 145; i++)
        {

                printf("%-8d | %-25s | %-20d meses | %-35d\n", 
                
                        equip[i].codigo,
                        equip[i].tipo,
                        equip[i].vida_util,
                        equip[i].quant_disp
                );

        }

        printf("Porcentagem de ES: %.2f%%\nA media de Vida util de ES: %.0f", porcent1, media1);



        return 0;
}