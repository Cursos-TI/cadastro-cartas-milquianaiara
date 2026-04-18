#include <stdio.h>

int main(){

    char Estado, Estado2;
    int Carta, Carta2;
    char Codigo[10], Codigo2[10];
    char Cidade[50], Cidade2[50];
    int Populacao, Populacao2;
    float Area, Area2;
    float Pib, Pib2;
    int PontosTuristicos, PontosTuristicos2;
    float Densidade_populacional, Densidade_populacional2;
    float Pib_percapita, Pib_percapita2;


    printf("----------CARTA1-----------:\n");

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &Estado); // Espaço no " %c" = Limpa o "Enter" anterior; o %d e o %s já fazem isso sozinhos por isso não precisam do espaço.

    printf("Digite um numero de 01 a 04: ");
    scanf("%d", &Carta); 

    printf("Digite o Código da Carta ex: A01: ");
    scanf("%s", Codigo); 

    printf("Digite a cidade: ");
    scanf("%s", Cidade); 

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade em quilômetros quadrados: ");
    scanf("%f", &Area);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &Pib);

    printf("Digite o Numero de Pontos Turisticos da Cidade: ");
    scanf("%d", &PontosTuristicos);

    Densidade_populacional = Populacao / Area;
    Pib_percapita = (Pib * 1000000000) / Populacao;

    printf ("\n");
    //-------------------------
 
    printf("----------CARTA1-----------\n");
    printf("Estado: %c \n", Estado); //%c = Caractere único (uma letra só: 'A')
    printf("Carta: %.2d \n", Carta); //%.2d = Inteiro com 2 dígitos (mostra "01" em vez de "1")
    printf("Codigo: %s \n", Codigo); //%s = String (grupo de letras/números: "A01" ou "Sao_Paulo")
    printf("Cidade: %s \n", Cidade);
    printf("Populacao: %d \n", Populacao);
    printf("Area: %.2f \n", Area);
    printf("Pib: %f \n", Pib);
    printf("PontosTuristicos: %d \n", PontosTuristicos);
    printf("Densidade Populacional: %.2f \n", Densidade_populacional);
    printf("Pib per capita: %.2f \n", Pib_percapita);
    printf ("\n");

    //-------------------------

    printf("----------CARTA2-----------\n");

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &Estado2); // Espaço no " %c" = Limpa o "Enter" anterior; o %d e o %s já fazem isso sozinhos por isso não precisam do espaço.

    printf("Digite um numero de 01 a 04: ");
    scanf("%d", &Carta2); 

    printf("Digite o Código da Carta ex: A01: ");
    scanf("%s", Codigo2); 

    printf("Digite a cidade: ");
    scanf("%s", Cidade2); 

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &Populacao2);

    printf("Digite a area da cidade em quilômetros quadrados: ");
    scanf("%f", &Area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &Pib2);

    printf("Digite o Numero de Pontos Turisticos da Cidade: ");
    scanf("%d", &PontosTuristicos2);

    Densidade_populacional2 = Populacao2/Area2;
    Pib_percapita2 = (Pib2 * 1000000000) /Populacao2;  // Ajuste de escala: PIB estava em bilhões, multipliquei para obter unidades monetárias em reais.
    

    
    printf ("\n");
    

    //-------------------------------------

    printf("----------CARTA2-----------\n");
    printf("Estado: %c \n", Estado2); //%c = Caractere único (uma letra só: 'A')
    printf("Carta: %.2d \n", Carta2); //%02d = Inteiro com 2 dígitos (mostra "01" em vez de "1")
    printf("Codigo: %s \n", Codigo2); //%s = String (grupo de letras/números: "A01" ou "Sao_Paulo")
    printf("Cidade: %s \n", Cidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Area: %.2f \n", Area2);
    printf("Pib: %f \n", Pib2);
    printf("PontosTuristicos: %d \n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f \n", Densidade_populacional2);
    printf("Pib per capita: %.2f \n", Pib_percapita2);
    printf ("\n");
    


    return 0;
}
