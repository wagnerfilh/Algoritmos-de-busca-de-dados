#include <stdio.h>

int buscaBinaria( int entradaUsuario, int vetorNumero[1000], int tamanhoVetor );
int contComparacao = 0;

int main ( void ){

    int vetorNumero[1000];
    int cont = 0;
    int entradaUsuario = 0;
    int tamanhoVetor;
    int resultado = 0;

    printf("##### PROGRAMA BUSCA BINARIA #####");

    while ( cont < 1000 ){
        vetorNumero[cont] = cont + 1;
        cont++;
    }

    printf("\nInforme o valor a ser buscado: ");
    scanf("%d", &entradaUsuario);

    tamanhoVetor = (int)( sizeof(vetorNumero)/sizeof(vetorNumero[0]));
    resultado = buscaBinaria( entradaUsuario , vetorNumero, tamanhoVetor );

    if ( resultado > 0 ){   
        printf("\nNumero %d encontrado na posição %d", entradaUsuario, resultado );
        printf("\nForam necessárias %d comparações.\n", contComparacao );
    }else{
        printf("\nNumero %d não encontrado!\n", entradaUsuario );
    }   

    return 0;

}//fim do main

int buscaBinaria( int entradaUsuario, int vetorNumero[], int tamanhoVetor ){
    int indiceMenor = 0;
    int indiceMaior = tamanhoVetor;
    int indiceMedio = 0 ;

    while( indiceMenor <= indiceMaior ){

        indiceMedio = (indiceMaior + indiceMenor) / 2;
        ++contComparacao;

        if ( vetorNumero[indiceMedio] < entradaUsuario ){
            indiceMenor = indiceMedio + 1;

        }else{

            if ( vetorNumero[indiceMedio] > entradaUsuario ){
                indiceMaior = indiceMedio - 1;
            }else{
                return indiceMedio+1;
            }//fim do if..else

        }//fim do if...else

    }//fim do while

    return -1;

}//fim da funcao