/*
7.Fa�a um Programa que pe�a os 3 lados de um tri�ngulo. 
O programa dever� informar se os valores podem ser um tri�ngulo. 
Indique, caso os lados formem um tri�ngulo, se o mesmo �: equil�tero, is�sceles ou escaleno.
Dicas:
Tr�s lados formam um tri�ngulo quando a soma de quaisquer dois lados for maior que o terceiro;
Tri�ngulo Equil�tero: tr�s lados iguais; Tri�ngulo Is�sceles: quaisquer dois lados iguais; Tri�ngulo Escaleno: tr�s lados diferentes;
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    int primeiroNumero = 0, segundoNumero = 0, terceiroNumero = 0;
    int maiorNumero = 0, menorNumero = 0;

	setlocale(LC_ALL, "Portuguese");
	
	printf("EXERC�CIO 7\n\n");
	
    printf("Digite valores para 3 lados de um tri�gulo: ");
    scanf("%i%i%i", &primeiroNumero, &segundoNumero, &terceiroNumero);
    
    if ((primeiroNumero + segundoNumero < terceiroNumero) || (primeiroNumero + terceiroNumero < segundoNumero) || (segundoNumero + terceiroNumero < primeiroNumero))
        printf("Nao � um tri�ngulo!");
    else if ((primeiroNumero == segundoNumero) && (primeiroNumero == terceiroNumero))
        printf("Equilatero");
    else if ((primeiroNumero==segundoNumero) || (primeiroNumero==terceiroNumero) || (segundoNumero==terceiroNumero))
        printf("Is�sceles");
    else
        printf("Escaleno");
    
    return 0;
}

