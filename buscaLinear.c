#include <stdio.h>

int buscaLinear( int entradaUsuario, int vetorNumero[1000] );

int contComparacao = 0;

int main ( void ){
    int vetorNumero[1000];
    int cont = 0;
    int entradaUsuario = 0;
    int resultado = 0;

    printf("##### PROGRAMA BUSCA LINEAR #####");

    while ( cont < 1000 ){
        vetorNumero[cont] = cont + 1;
        cont++;
    }//fim do while

    printf("\nInforme o valor a ser buscado: ");
    scanf("%d", &entradaUsuario);

    resultado = buscaLinear( entradaUsuario , vetorNumero );

    if ( resultado > 0 ){   
        printf("\nNumero %d encontrado na posição %d", entradaUsuario, resultado );
        printf("\nForam realizadas %d comparações.\n", contComparacao );
    }else{
        printf("\nNumero %d não encontrado!\n", entradaUsuario );
    }//fim do if..else

    return 0;

}//fim do main

int buscaLinear( int alvo, int vetor[1000] ){

    for( int i = 0; i < 1000; i++ ){
        ++contComparacao;
        if( vetor[i] == alvo )
            return i+1;
        
    }//fim do for

    return -1;

}//fim da funcao