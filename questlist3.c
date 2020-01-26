/*Escreva um programa em C para converter o número decimal em número binário usando
função.
Insira qualquer número decimal: 65
Saída esperada:
O valor binário é: 1000001*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num = 65;
   int bin[7]; // <---------------
   int aux;

   for (aux = 6; aux >= 0; aux--)
   {
      if (num % 2 == 0)
         bin[aux] = 0;
      else
         bin[aux] = 1;
         num /= 2;
   }
   for (aux = 0; aux < 7; aux++)
       printf("%d", bin[aux]);
   printf("\n");
   return 0;
}