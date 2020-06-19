#include <stdio.h>
#include <stdlib.h>


int main()

{
    // Parâmtro A(concavidade)
    int a=0;
    //Incremento de x
    float inc=0;
    //Vetor com os limites de x
    int vlim[2]={};
    //inicialização de variáveis
    double i=0;
    double res=0;


    printf("*****CALCULO DE UMA PARÁBOLA-> F(X)=AX^2*****\n");
    printf("Qual o valor de a? ");
    if (scanf("%d",&a)==0)
    {
        printf("ERRO: FALHA NA INTRODUCAO DA CONCAVIDADE! DEVE SER UM INTEIRO!\n");
        return 0;
    }
    
    printf("Qual o intervalo? ");
    if (scanf("%d %d",&vlim[0], &vlim[1])==0)
    {
        printf("ERRO: FALHA NA INTRODUCAO DOS LIMITES! DEVEM SER INTEIROS!\n");
        return 0;
    }
       
    printf("Qual o incremento? ");
    if(scanf("%f",&inc)==0)
    {
        printf("ERRO: FALHA NA INTRODUCAO DO INCREMENTO! DEVE SER INTEIRO!\n");
        return 0;
     

    }

    if (abs(inc) > vlim[1]-vlim[0])
    {
        printf("ERRO: FALHA NA INTRODUCAO DO INCREMENTO! DEVE RESPEITAR OS LIMITES!\n");
        return 0;
    }
    
    for ( i = vlim[0]; i <= vlim[1]; i=i+inc)
    {
        res=a*i*i;
        printf("f(%.1lf)=%.1lf\n", i,res);
    }
    
   
     
}
