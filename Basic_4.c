
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ordenado (int src[],int n)
{
    int count=0, max=0;

    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            max=src[i];
            count=count+1;
        }
        
        if(src[i]>src[i-1])
        {
            max=src[i];
            count=count+1;
        }
    }
    if(count==n)
    {
        printf("O vetor está ordenado!\n");
        return 1;
    }
    else
    {
        return 0;
    }
    
    
    
}

int main()
{
    int elementos=0;
    int nmax=100;
    int v[100]={};
    int aux[100]={};
    char str[1000];
    char dest[50];

    printf("Intoduza o numero de numeros: ");
    if(scanf("%d",&elementos)==0)
    {
        printf("ERRO! NUMERO INTRODUZIDO DEVERIA SER INTEIRO\n");
        return 0;
    }
    if(elementos>nmax)
    {
        printf("ERRO!EXCEDEU O NUMERO DE ELEMENTOS!\n");
        return 0;
    }



    for (int i=0; i<elementos; i++)
    {
        printf("Introduza %dº numero: ",i+1);
        if(scanf("%d",&v[i])==0)
        {
            printf("ERRO! NUMERO INTRODUZIDO DEVE SER INTEIRO!\n");
            return 0;

        }

    }
    if(ordenado(v,elementos)==1)
    {
        for(int i=0; i<elementos; i++)
        {
            aux[elementos-1-i]=v[i];
        }
        strcpy(str,"Elementos do vetor por ordem descrescente:\n {");
         for (int i=0; i<elementos; i++)
        {
            
            
            if(i==elementos-1)
            {
                sprintf(dest, "%d}", aux[i]);
                strcat(str, dest);
            }
            else
            {
                sprintf(dest, "%d,", aux[i]);
                strcat(str, dest);
            }
            
        
        }
        
        printf("%s\n",str);
    }
   
    
}
