/*
 8.Fa�a um programa que pe�a uma nota, entre zero e dez. 
 Mostre uma mensagem caso o valor seja inv�lido e continue pedindo at� que 
 o usu�rio informe um valor v�lido.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int nota = -1;

	setlocale(LC_ALL, "Portuguese");
	
	printf("EXERC�CIO 8\n\n");
	
    
	while (nota <0 || nota>10)
	{
		if (nota != -1)
		{
			printf("Nota inv�lida!\n\n");
		}
		
	    printf("Digite uma nota entre 0 e 10:\n ");
	    scanf("%i", &nota);
	}
	
    printf("Nota OK");
    
    return 0;
}

