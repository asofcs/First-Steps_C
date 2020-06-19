
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float avg(float x[])
{
    float media=0;
    float soma=0;

    for(int i=0; i<10; i++)
    {
        soma=soma+x[i];
    }
    media=soma/10;

    return media;
}

float max(float x[])
{
    float maxf=0;
    for(int i=0; i<10; i++)
    {
        if(i==0)
        {
            maxf=x[i];
        }
        else
        {
            if(x[i]>x[i-1])
            {
                maxf=x[i];
    
            }
            
        }
    }
    return maxf;
}

float min(float x[])
{
    float minf=0;
    for(int i=0; i<10; i++)
    {
        if(i==0)
        {
            minf=x[i];
        }
        else
        {
            if(x[i]<x[i-1])
            {
                minf=x[i];
    
            }
            
        }
    }
    return minf;
}

int imprimir(float x[])
{
    char str[1000];
    char dest[50];

    strcpy(str,"Vetor:");
    for (int i=0; i<10; i++)
    {
        sprintf(dest," %.1f ",x[i]);
        strcat(str, dest);

    }
    strcat(str, "\n");
    printf("%s",str);
}

int main()

{
    float vet[10]={};
    float aux=0;

    for (int i=0; i<10;i++)
    {
        printf("Introduza %d numero: ",i+1);
        if(scanf("%f",&aux)==0)
        {
            printf("ERRO AO INTRODUZIR UM NÚMERO REAL!\n");
            return 0;
        }

        vet[i]=aux;
    }

    printf("Media: %.1f\n",avg(vet));
    printf("Maximo: %.1f\n",max(vet));
    printf("Minimo: %.1f\n",min(vet));
    imprimir(vet);



}
