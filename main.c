#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ATENCAO, AO COLOCAR AS FUNCOES F(X) E F`(X)
//SE A EQUACAO ESTIVER ERRADA O SOFTWARE NAO CONVERGIRA

/*
Função                          Descrição do comando
sqrt( )                         Calcula raiz quadrada
pow(variável, expoente)         potenciação
sin( )                          seno
cos( )                          cosseno
tan( )                          Tangente
log( )                          logaritmo natural
log10( )                        logaritmo base 10

Número de Euler                 M_E
Logaritmo de e na base 2        M_LOG2E
Logaritmo de e na base 10       M_LOG10E
Logaritmo neperiano ou natural  M_LN10
Pi                               M_PI
*/

double fx(double x){
    return 0.2 + 25*x - 200*pow(x,2) + 675*pow(x,3) - 900*pow(x,4) + 400*pow(x,5);
}


double pontoMedio(double b, double a){

    return (b-a)/2;

}

double umTercoSimpson(double b, double a){
    double h, x0, x1, x2;
    h = (pontoMedio(b,a));
    x0 = fx(a);
    x1 = fx(h);
    x2 = fx(b);
    printf("%lf\n",x0);
    printf("%lf\n",x1);
    printf("%lf\n",x2);

    return (h/3)*(x0+4*x1+x2);
}

int main(){

    double a, b;
    printf("DIGITE O PONTO INICIAL X0: ");
    scanf("%lf", &a);

    printf("DIGITE O PONTO FINAL X2: ");
    scanf("%lf", &b);


    printf("RESULTADO ~= %lf", umTercoSimpson(b,a));

    return 0;
}
