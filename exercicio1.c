#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    // Declaração das funções.
    float media (float num1, float num2, float num3, float num4, float num5);
    float media_ponderada(float num1, float num2, float num3, float num4, float num5);
    float maior (float num1, float num2, float num3, float num4, float num5);
    float menor (float num1, float num2, float num3, float num4, float num5);
    float desvio_padrao (float num1, float num2, float num3, float num4, float num5);

    // Declaração de variáveis.
    float num1, num2, num3, num4, num5, res_med = 0, res_mediaP = 0, res_maiorn = 0, res_menorn = 0, res_desvio = 0;
    int escolha, escolha2, escolha3;
    
    comeco: 
    printf("0) Digitar valores\n");
    printf("1) Média aritmética simples\n");
    printf("2) Média ponderada\n");
    printf("3) Desvio padrão\n");
    printf("4) Maior valor\n");
    printf("5) Menor valor\n");
    printf("9) Sair do programa\n");
    printf("Digite qual opção você deseja calcular: \n");
    scanf("%d", &escolha);

    // Switch que considera o que o usuário digitará acima. 
    switch(escolha){
        case 1: 
        printf("Opção inválida. Não é possível calcular sem atribuir valores para o número.\n");
        goto comeco;

        break;

        case 2: 
        printf("Opção inválida. Não é possível calcular sem atribuir valores para o número.\n");
        goto comeco;
        
        break;

        case 3:
        printf("Opção inválida. Não é possível calcular sem atribuir valores para o número.\n");
        goto comeco;

        break;

        case 4:
        printf("Opção inválida. Não é possível calcular sem atribuir valores para o número.\n");
        goto comeco;

        break;

        case 5: 
        printf("Opção inválida. Não é possível calcular sem atribuir valores para o número.\n");
        goto comeco;

        break;

        case 9: 
        exit(0);

        break;

        break;

        case 0: 
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        printf("Digite o terceiro número: ");
        scanf("%f", &num3);

        printf("Digite o quarto número: ");
        scanf("%f", &num4);

        printf("Digite o quinto número: ");
        scanf("%f", &num5);

        goto comeco2;

        break;

        default:
        printf("Opção inválida. Digite um valor que esteja no menu.\n");
        goto comeco;
        break;
    }

    comeco2:
    printf("\nDigite uma opção para calcular:\n");
    printf("1) Média aritmética simples\n");
    printf("2) Média ponderada\n");
    printf("3) Desvio padrão\n");
    printf("4) Maior valor\n");
    printf("5) Menor valor\n");
    printf("9) Sair do programa\n");
    scanf("%d", &escolha2);

    // Switch que funciona apenas se o usuário digitar os cinco números.
    switch(escolha2){
        case 1: 
        res_med = media(num1, num2, num3, num4, num5);
        printf("A média dos valors é: %.3f", res_med);

        break;

        case 2:
        res_mediaP = media_ponderada(num1, num2, num3, num4, num5);
        printf("A média ponderada dos valores é: %.3f", res_mediaP);

        break;

        case 3:
        res_desvio = desvio_padrao(num1, num2, num3, num4, num5);
        printf("O desvio padrão dos valores é: %.3f", res_desvio);

        break;

        case 4:
        res_maiorn = maior (num1, num2, num3, num4, num5);
        printf("O maior número é: %.3f", res_maiorn);

        break;

        case 5:
        res_menorn = menor (num1, num2, num3, num4, num5);
        printf("O menor número é: %.3f", res_menorn);
        
        break;

        case 9:
        exit(0);
        
        break;

        break;

        default: 
        printf("Opção inválida.");
        goto comeco2;

        break;

    }

    printf("\nPara retornar ao menu digite 0. Para finalizar o programa digite qualquer número.\n");
    scanf("%d", &escolha3);

    if (escolha3 == 0){
        goto comeco;
    } else
        exit(0);

    return 0;

}

// Funções para as operaçẽos matemáticas.

float media (float num1, float num2, float num3, float num4, float num5){
    float med = 0;
    med = ((num1 + num2 + num3 + num4 + num5)/5);
    return med;
}

float media_ponderada(float num1, float num2, float num3, float num4, float num5){
    float mediap = 0, peso1 = 0, peso2 = 0, peso3 = 0, peso4 = 0, peso5 = 0, soma_pesos = 0;
    printf("Digite o peso associado ao numero 1: ");
    scanf("%f", &peso1);
    printf("Digite o peso associado ao numero 2: ");
    scanf("%f", &peso2);
    printf("Digite o peso associado ao numero 3: ");
    scanf("%f", &peso3);
    printf("Digite o peso associado ao numero 4: ");
    scanf("%f", &peso4);
    printf("Digite o peso associado ao numero 5: ");
    scanf("%f", &peso5);
    
    soma_pesos = peso1 + peso2 + peso3 + peso4 + peso5;
    mediap = ((num1*peso1 + num2*peso2 + num3*peso3 + num4*peso4 + num5*peso5)/(soma_pesos));

    return mediap;
}

float maior (float num1, float num2, float num3, float num4, float num5){
    float num_maior;
        if ((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5)){
        num_maior = num1;
        } 
        else if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5)){
        num_maior = num2;
        } 
        else if ((num3 > num1) && (num3 > num2) && (num3 > num4) && (num3 > num5)) {
        num_maior = num3;
        } 
        else if ((num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5)) {
        num_maior = num4;
        } 
        else if ((num5 > num1) && (num5 > num2) && (num5 > num3) && (num5 > num4)) {
        num_maior = num5;
        }

    return num_maior; 
}

float menor (float num1, float num2, float num3, float num4, float num5){
    float num_menor;
        if ((num1 < num2) && (num1 < num3) && (num1 < num4) && (num1 < num5)){
        num_menor = num1;
        }
        else if ((num2 < num1) && (num2 < num3) && (num2 < num4) && (num2 < num5)){
        num_menor = num2;
        } 
        else if ((num3 < num1) && (num3 < num2) && (num3 < num4) && (num3 < num5)) {
        num_menor = num3;
        } 
        else if ((num4 < num1) && (num4 < num2) && (num4 < num3) && (num4 < num5)) {
        num_menor = num4;
        } 
        else if ((num5 < num1) && (num5 < num2) && (num5 < num3) && (num5 < num4)) {
        num_menor = num5;
        }

    return num_menor;
}

float desvio_padrao (float num1, float num2, float num3, float num4, float num5){
    float med = 0, dif1, dif2, dif3, dif4, dif5, desvio = 0, soma_dif = 0, div_dif = 0;

    med = (num1 + num2 + num3 + num4 + num5)/5;

    dif1 = num1 - med;
    dif2 = num2 - med;
    dif3 = num3 - med;
    dif4 = num4 - med;
    dif5 = num5 - med;

    dif1*=dif1; dif2*=dif2; dif3*=dif3; dif4*=dif4; dif5*=dif5;

    soma_dif = dif1 + dif2 + dif3 + dif4 + dif5;

    div_dif = (soma_dif)/(5 - 1);

    desvio = sqrt(div_dif);

    return desvio;
}