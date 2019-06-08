#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    printf("\tMenu\n"
           "1 - F(x) = 1/x\n"
           "2 - F(x) = 1/ax+b\n"
           "3 - F(x) = 1/Vx\n"
           "4 - F(x) = 1/Vax+b\n");
    setlocale(LC_ALL, "portuguese");

    float a;
    float b;
    float x;
    int menu;
    float resultado;
    float aux;



        printf("\nDigite a operação desejada: ");
        scanf("%d", &menu);

        switch(menu)
        {
            case 1:

                printf("Digite o valor de x: ");
                scanf("%f", &x);

                if(x == 0)
                {
                    printf("Esse valor não faz parte do dominio da função escolhida. \n");
                }
                else
                {
                    resultado = 1/x;
                    printf("Resultado f(%.1f): %.2f\n" , x, resultado);
                }

            break;

            case 2:

                do{

                printf("Digite o valor de a: ");
                scanf("%f", &a);

                if(a == 0){
                    printf("Valor de A precisa ser diferente de 0\n");
                }

                }while(a == 0);



                printf("Digite o valor de b: ");
                scanf("%f", &b);
                printf("Digite o valor de x: ");
                scanf("%f", &x);

                aux = a*x + b;

                if(aux == 0)
                {
                    printf("Esse valor não faz parte do dominio da função escolhida. \n");
                }
                else
                {
                    resultado = 1/aux;
                    printf("Resultado f(%.1f): %.2f\n" , x, resultado);
                }


            break;

            case 3:

                printf("Digite o valor de x: ");
                scanf("%f", &x);

                if(x < 1)
                {
                    printf("Esse valor não faz parte do dominio da função escolhida. \n");
                }
                else
                {
                    x = sqrt(x);
                    resultado = 1/x;
                    printf("Resultado f(%.1f): %.2f\n" , x, resultado);
                }

            break;

            case 4:

                do{

                printf("Digite o valor de a: ");
                scanf("%f", &a);

                if(a == 0){
                    printf("Valor de A precisa ser diferente de 0\n");
                }

                }while(a == 0);



                printf("Digite o valor de b: ");
                scanf("%f", &b);
                printf("Digite o valor de x: ");
                scanf("%f", &x);

                aux = a*x + b;

                if(aux < 1)
                {
                    printf("Esse valor não faz parte do dominio da função escolhida. \n");
                }
                else
                {
                    aux = sqrt(aux);
                    resultado = 1/aux;
                    printf("Resultado f(%.1f): %.2f\n" , x, resultado);
                }

            break;

            case 0:
            break;

            default:
            printf("Número do menu inválido! \n");
        }



    return 0;
}
