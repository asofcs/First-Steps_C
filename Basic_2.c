#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()

{
    int vet1[5]={};
    int vet2[5]={};
    int count[5]={};
    char src[1000], dest[50];
    
    printf("Vetor 1 \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Introduza %dº número: ",i+1);
        if(scanf("%d",&vet1[i])==0)
        {
            printf("ERRO! ESPERADO NUMERO INTEIRO!\n");
            return 0;
        }
        for (int j=0; j<5; j++)
        {
            if(vet1[i]== vet1[j] && i != j)
            {
                printf("ERRO! NUMERO REPETIDO NO VETOR 1!\n");
                return 0;
            }

        }
        
       
    }
    
    printf("Vetor 2 \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Introduza %dº número: ",i+1);
        if(scanf("%d",&vet2[i])==0)
        {
            printf("ERRO! ESPERADO NUMERO INTEIRO!\n");
            return 0;
        }

        for (int j=0; j<5; j++)
        {
            if(vet2[i]== vet2[j] && i != j)
            {
                printf("ERRO! NUMERO REPETIDO NO VETOR 2!\n");
                return 0;
            }

        }
        
    }
    
    for (int i = 0; i<5; i++ )
    {
        for(int j=0; j<5; j++)
        {
            if (vet1[i]==vet2[j])
            {
                count[i]=count[i]+1;
               
            }
            
        }
    }
    strcpy(src,"Comuns:");
    for (int i = 0; i<5; i++ )
    {
        if(count[i]==1)
        {
            sprintf(dest, " %d ", vet1[i]);
            strcat(src, dest);
        }
       
    }
    printf("\n%s",src);
}
