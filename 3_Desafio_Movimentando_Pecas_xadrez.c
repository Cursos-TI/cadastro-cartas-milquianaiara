#include <stdio.h>

int main () {

// Torre: Move-se em linha reta horizontalmente ou verticalmente. Movimento da Torre cinco casas para a direita.
//Estrutura: for

printf("\n\n\n------------MOVIMENTAÇÃO DA TORRE ------------ \n\n");


    for (int i = 1; i <= 5; i++) {
        printf("direita \n"); 
    }

//=======================================================================================================================================


//Bispo: Move-se na diagonal. Movimento do Bispo cinco casas na diagonal para cima e à direita imprimindo a combinação de duas direções a cada casa (ex: "Cima, Direita").
//Estrutura: do wile (Simulação Real com 2 Coordenadas).

printf("\n\n\n------------MOVIMENTAÇÃO DO BISPO ------------\n\n");

int contadorBispoHorizontal = 1;
int contadorBispoVertical = 1;
    do {
        printf("Cima, Direita\n");

        contadorBispoVertical++;          // Sobe uma linha
        contadorBispoHorizontal++;        // Avança uma coluna

    } while (contadorBispoHorizontal <= 5 && contadorBispoVertical <= 5); //&& => para que o resultado final seja verdadeiro, todas as condições individuais precisam ser verdadeiras ao mesmo tempo.


//=======================================================================================================================================


//    Rainha: Move-se em todas as direções. Rainha oito casas para a esquerda.
//Estrutura: wile


printf("\n\n\n------------MOVIMENTAÇÃO DA RAINHA ------------\n\n");


int contadorRainha = 1;

while (contadorRainha <= 8) 
{
    printf("esquerda \n");
     contadorRainha++;
}

return 0;
}
