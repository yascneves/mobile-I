// 11.Fa�a um programa que imprima na tela os n�meros de 1 a 20, um abaixo do outro. 
// Depois modifique o programa para que ele mostre os n�meros um ao lado do outro.


#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("EXERC�CIO 11\n\n");

	printf("Listagem horizontal:\n");
		
	for (int i = 1; i<21; i++)	
	{
		printf("%i\n", i);
	}
	
	printf("\nListagem vertical:\n");
		
	for (int i = 1; i<21; i++)	
	{
		printf("%i,", i);
	}
    
    return 0;
}
