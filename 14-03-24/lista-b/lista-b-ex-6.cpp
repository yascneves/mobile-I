//
// 6.Fa�a um Programa que leia tr�s n�meros e mostre o maior e o menor deles. 
//
#include <stdio.h>
#include <locale.h>

int main()
{
    int primeiroNumero = 0, segundoNumero = 0, terceiroNumero = 0;
    int maiorNumero = 0, menorNumero = 0;

	setlocale(LC_ALL, "Portuguese");
	
	printf("EXERC�CIO 6\n\n");
	
    printf("Digite 3 n�meros: ");
    scanf("%i%i%i", &primeiroNumero, &segundoNumero, &terceiroNumero);
    
    menorNumero = primeiroNumero;
    maiorNumero = primeiroNumero;
    
	if ((primeiroNumero == segundoNumero) && (primeiroNumero == terceiroNumero))
	{
		printf("\nTodos n�meros s�o iguais.");
	}
	else
	{
		if (menorNumero > segundoNumero)
			menorNumero = segundoNumero;
		if (menorNumero > terceiroNumero)
			menorNumero = terceiroNumero;
			
		if (maiorNumero < segundoNumero)
			maiorNumero = segundoNumero;
		if (maiorNumero < terceiroNumero)
			maiorNumero = terceiroNumero;	
		
	    printf("\nO maior n�mero �: %i\n", maiorNumero);
	    printf("O menor n�mero �: %i\n", menorNumero);
	}
    
    return 0;
}

