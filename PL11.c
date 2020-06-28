#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *fp;
    char c;
    int vet[26]={0};
    int counter=0;
    int pos=0;
    double media[26]={0};

    //LÊ FICHEIRO
    fp=fopen("lusiadas.txt","r");
    if(fp==NULL)
    {
        printf("ERRO AO ABRIR O FICHEIRO!\n");
        return -1;
    }
    else
    {
        while((c=getc(fp))!=EOF)
        {
            
            if((int)c>=65 && (int)c<=90)
            {
                c=(c+32);
               
            }
            if((int)c==192 || (int)c==193 || (int)c==194 || (int)c==195)
            {
                c=97;

            }

            if((int)c==224 || (int)c==225 || (int)c==226 || (int)c==227)
            {
                c=97;

            }

            if((int)c==211 || (int)c==212 || (int)c==213)
            {
                c=111;
                
            }

            if((int)c==243 || (int)c==244 || (int)c==245)
            {
                c=111;

            }
            if((int)c==205 || (int)c==237)
            {
                c=105;

            }

            if((int)c==201 || (int)c==202 || (int)c==233 || (int)c==234)
            {
                c=101;

            }
            if((int)c==218 || (int)c==250)
            {
                c=117;

            }

            if((int)c==199 || (int)c==231)
            {
                c=99;

            }

            if((int)c>=97 && (int)c<=122)
            {
                pos=c-97;
                counter= counter+1;
                vet[pos]=vet[pos]+1;
                
                

            }
            
            
            
           
           
            
            
            
            
        }
        
      printf("TOTAL %d\n",counter);
      for (int i=0; i<26;i++)
        {
            printf("letra %c: \n", i+97);
            media[i]=vet[i]/(float)counter;
            media[i]=media[i]*100;
            printf("letra %c: %.2lf  \n", i+97,media[i]);
        }
         
    }
    
        
    
    fclose(fp);
    
}