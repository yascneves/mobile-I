# 7 - Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês. 
salarioHora = float(input("Digite o salario por hora:"))
horasTrabalhadas = int(input("Digite a quantidade de horas trabalhadas no mês:"))
salarioMes = salarioHora * horasTrabalhadas
print("Seu salário é de:", salarioMes)