#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        int i,  idade[10];

        srand(time(NULL));

        for(i=0;i<=10;i++)
        {
                idade[i] = rand()%50;
                printf("%d\n", idade[i]);

        }





        return 0;
}