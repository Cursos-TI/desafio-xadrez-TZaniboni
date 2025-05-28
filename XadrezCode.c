#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
     
    int opcao1;
    int i = 1;


   printf("        XADREZ\n");
   printf("     MENU PRINCIPAL\n");
   printf("Qual peça deseja movimentar?\n");
   printf(" 1. TORRE, 5 casas a direita\n 2. RAINHA, 8 casas a esquerda\n 3. BISPO, 5 casas acima e a direita\n");
   printf("Digite a opção: ");
   scanf("%d", &opcao1);


   switch (opcao1) {

   case 1:
    
    for (int i = 0; i < 5; i++) {
        printf("mais uma casa a direita\n");

    }

    break;

    case 2:

     while (i <= 8) {
        printf("%d° casa a esquerda\n", i);
        i++;
    }
    
    break;

    case 3:

    do {
        printf("%d° casa acima e a direita\n", i);
        i++;
    } while (i <= 5);

    break;


   }
  return 0;
}