#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main(){

    int i, num, tentativa, numero_de_tentativas = 0;

        srand(time(0));

        num = (rand() % 101); // Divisão modular por 101 resultará em um número entre 0 e 100.
    do {
    printf("Digite um número: \n");
    scanf("%d", &tentativa);
        if (tentativa == num) {
        printf("Parabéns! Esse é o número correto.\n");
        } else if (tentativa > num){
            printf("Seu palpite é maior que o número.\n");
            } else if (tentativa < num){
            printf("Seu palpite é menor que o número.\n");
            }
        numero_de_tentativas += 1;
        } while (tentativa != num); // Loop enquanto o usuário não acerta o número gerado aleatoriamente.

        printf("Número total de tentativas: %d\n", numero_de_tentativas);

    }