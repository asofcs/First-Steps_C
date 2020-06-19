#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inverte (char *strOriginal, char *strInvertida)
{
    int len=0;
    char aux[2];
    len=strlen(strOriginal);
    
    for(int i=0; i<len; i++)
    {
        sprintf(aux,"%c",strOriginal[len-1-i]);
        strcat(strInvertida,aux);


    }
    if(strcmp(strOriginal,strInvertida)==0)
    {
        printf("Resultado: %s e capicua.\n",strOriginal);
    }
    else
    {
        printf("Resultado: %s nao e capicua.\n",strOriginal);
    }
    

}

int main()
{
    char str[100];
    char aux2[100];

    while (strcmp(str,".") != 0)
    {
        printf("Palavra? ");
        scanf("%s",str);

        if(strcmp(str,".")==0)
        {
            return 0;
        }
        else
        {
            inverte(str,aux2);
            
        }
        
        

    }
    

}
