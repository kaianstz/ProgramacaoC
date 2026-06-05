        #include <stdio.h>
        #include <stdlib.h>
        #include <time.h>

        int main() {
            int numeroJogador, numeroComputador, resultado;
            char tipoComparacao;

            // Gerar número aleatório para o computador
            srand(time(0));
            numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

            //Inicio do jogo
            printf("Bem-Vindo ao Jogo Maior, Menor ou Igual!\n");
            printf("Voce deve escolhaer um numero e o tipo de Comparacao.\n");
            printf("M. - Maior\n");
            printf("N. - Menor\n");
            printf("I. - Igual\n");

            printf("Escolha a Comparacao (M/N/I): ");
            scanf(" %c", &tipoComparacao);
            
            printf("Digite um numero entre 1 e 100: ");
            scanf("%d", &numeroJogador);

            switch (tipoComparacao)
            {
            case 'M':
            case 'm':
                printf("Voce escolheu a opcao Maior.\n");
                resultado = numeroJogador > numeroComputador ? 1 : 0;                
                break;
             case 'N':
             case 'n':
                printf("Voce escolheu a opcao Menor.\n");
                resultado = numeroJogador < numeroComputador ? 1 : 0;
                break;
             case 'I':
             case 'i':
                printf("Voce escolheu  a opcao Igual.\n");
                resultado = numeroJogador == numeroComputador ? 1 : 0;
                break;
            default:
                printf("Tipo de comparacao invalida. Por favor, escolha M, N ou I.\n");
                break;
            }

            printf("Numero do Computador: %d e o do Jogador: %d\n", numeroComputador, numeroJogador);

            if (resultado == 1)
            {
                printf("Parabéns, Voce Venceu!\n");
            } else {
                printf("Infelizmente, Voce Perdeu!\n");
            }

























            return 0;
        }