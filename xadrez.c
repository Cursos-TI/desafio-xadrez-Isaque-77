#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void bispo(int movimento){
    if (movimento > 0)
    {
        printf("Diagonal superior direita \n");
        bispo(movimento - 1);
    }
}
void torre(int movimento){
    if (movimento > 0)
    {
        printf("Direita \n");
        torre(movimento - 1);
    }
}
void rainha(int movimento){
    if (movimento > 0)
    {
        printf("Esquerda \n");
        rainha(movimento - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    //Mover o Bispo 5 casas na diagonal superior direita.
    /*int bispo = 0;
    do
    {
        printf("Diagonal superior direita\n");
        bispo++;
    } while (bispo < 5);
    printf("\n"); //Separar o movimento do Bispo e da Torre.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    //Mover a Torre 5 casas para a direita.
    int torre = 0;
    while (torre < 5)
    {
        printf("Direita\n");
        torre++;
    }
    printf("\n"); //Separar o movimento da Torre e da Rainha.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda. 

    //Mover a Rainha 8 casa para a esquerda. 
    for (int rainha = 0; rainha < 8; rainha++)
    {
        printf("Esquerda \n"); 
    }
    printf("\n"); //Separar o movimento da Torre e da Rainha.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    //Mover o cavalo 2 casas para baixo e 1 casa para equerda.
    int cavalo =1;
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        
    }*/
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    
    //Movimento do bispo
    int quantidade = 5;

    printf("\nMovimento do Bispo:\n");
    bispo(quantidade);

    //Movimento da Torre
    int quantidade2 = 5;

    printf("\nMovimento da Torre:\n");
    torre(quantidade2);

    //Movimento da Rainha
    int quantidade3 = 8;

    printf("\nMovimento da Rainha:\n");
    rainha(quantidade3);

    //Movimento do cavalo 
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) // Duas vezes para cima
    {  
        printf("Cima\n");
        if (i == 1) 
        {
            for (int j = 0; j < 1; j++) // Uma vez para direita
            {  
                printf("Direita\n");
            }
        }
    }


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}