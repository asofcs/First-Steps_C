#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char str[1000];
    char aux[2];
    char aux2[1000];
    char major[1000];


    int comp[1000]={};
    double comptotal=0;
    char c;
    int count=0, compmaior=0;
    double compmedio=0;
    

    printf("Frase? ");
    
    fgets(str, sizeof(str), stdin); 
    for (int i=0; i<strlen(str); i++)
    {   
        c=str[i];
       
        if(i==0)
        {
            sprintf(aux,"%c",c);
            strcpy(aux2,aux);
        }
        else
        {
            sprintf(aux,"%c",c);
            strcat(aux2,aux);    
        }
        
       
        
        if(c==' '|| c=='\n')
        {
            
            
            comp[count]=strlen(aux2);
            

            if(count==0)
            {
                 
                 compmaior=comp[count];
                 strcpy(major,aux2);
                 
            }
            else
            {
                if (strlen(aux2)>compmaior)
                {
                    compmaior=comp[count];
                    strcpy(major,aux2);
                }
                
               
            }
            count=count+1;
            strcpy(aux2,"");
            
            
        }
        
       
       
    }
     comptotal=strlen(str)-count;
     compmedio=comptotal/count;
     printf("Numero de palavras: %d\n",count);
     printf("Palavra maior: %s",major);
     printf("Comprimento medio: %.1f\n",compmedio);
     
    

}
