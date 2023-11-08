#include <stdio.h>
#include <stdlib.h>
int main () {
	int vetor[10];
	int i;
	// Ler os numeros do usuario e calcular o dobro 
	for (i = 0 ; i < 10; i++) {
	       printf("Digite o número na posição %d: ", i);
               scanf("%d", &vetor[i]);
               vetor[i] *=2;
         }	       
         // Apresentar os resultados 
	 printf(" Os números dobrados são :\n");
	 for (i = 0; i < 10; i++) {
		 printf ("%d\n", vetor[i]);
	 }
	 return 0;
         } 
