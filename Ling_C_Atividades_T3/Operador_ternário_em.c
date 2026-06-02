          #include <stdio.h>
          
          int main() {
            int idade = 19;
            int resultado;

            int temperatura = 31;
            int resultado2;

            int num1 = 40, num2 = 20;
            int maior;

                // Exemplo simples do operador ternário 01
            resultado = idade >= 18 ? 1 : 0;

            if (resultado == 1) {
                printf("Maior de idade\n");
            } else {
                 printf("Menor de idade\n");
            }

                // Exemplo simples do operador ternário 02
            resultado2 = temperatura > 30 ? 1 : 0;

            if (resultado2 == 1) {
                printf("Está Calor\n");
            } else {
                printf("Está Frio\n");
            }
            
                // Exemplo simples do operador ternário 03
            num1 > num2 ? (maior = num1) : (maior = num2);

            if (num1 > num2){
                printf("O maior número é: %d\n", num1);
            }
            else {
                printf("O maior número é: %d\n", num2);
            }
    
            printf("O maior número é: %d\n", maior);

            return 0;

          }