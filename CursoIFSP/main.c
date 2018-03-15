#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A[5], i;
	
	A[0] = 2;
	A[1] = 6;
	A[2] = 7;
	A[3] = 9;
	A[4] = 11;
	
	for (i=0;i<5;i++) {
		if(A[i] % 2 == 0) {
			printf("%d \n", A[i]);
		}
	}
	
	/*
	int i, n;
	int vet[5];
	
	printf("Insira os valores no vetor: \n");
	for (i=0; i<5; i++) {
		scanf("%d", &vet[i]);
	}
	
	printf("Impressao do Resultado: \n");
	for(i=5-1; i>=0;i--)
	{
		printf("%d", vet[i]);
	}
	*/
/*	
	int soma = 0;
	int v[10];
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("Entre com o elemento %i do vetor ", i + 1);
		scanf("%d", &v[i]);
	}
	
	for (i=0;i<10;i++) {
		soma += v[i];
	}
	
	printf("\nO valor da soma eh: %d", soma);
	
*/
	
	/*
	float valorQualquer;
	float v[10];
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("Entre com o elemento %i do vetor ", i + 1);
		scanf("%f", &v[i]);
	}
	
	valorQualquer = v[0];
	for (i=0;i<10;i++) {
		if(v[i] > valorQualquer) {
			valorQualquer = v[i];
		}
	}
	
	printf("\nO valor encontrado acima eh:%.f", valorQualquer);
	
	*/
	// Loop infinito
	/*
	int x =  0;
	while(x < 10) {
		printf("\nO valor de X eh %d", x);
	}
	*/
	
	/*
	int cont = 0;
	while (cont < 10) {
		printf("%d ", cont);
		cont = cont + 1;
	}
	*/
	
	/*
	int n = 0;
	int somatorio =  0;
	while (n >= 0) {
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n>0) {
			somatorio = somatorio + n;
		}
	}
	printf ("O somatorio eh: %d", somatorio);
	*/
	
	// Imprimindo os números pares até 50
	/*
	int i;
	for (i=0; i <= 50; i=i+2) {
		printf("%d", i);
	}
	*/
	
	
	return 0;
}
