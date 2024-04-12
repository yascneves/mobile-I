# # 7 - Faça um Programa que pergunte quanto você ganha por hFaça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: 
# - salário bruto. 
# - quanto pagou ao INSS. 
# - quanto pagou ao sindicato. 
# - o salário líquido. 
# calcule os descontos e o salário líquido, conforme a tabela abaixo: 
# + Salário Bruto : R$ 
# - IR (11%) : R$ 
# - INSS (8%) : R$ 
# - Sindicato ( 5%) : R$ 
# = Salário Liquido : R$ 
# # Obs.: Salário Bruto - Descontos = Salário Líquido.
salarioHora = float(input("Digite o salario por hora:"))
horasTrabalhadas = int(input("Digite a quantidade de horas trabalhadas no mês:"))
salarioBruto = salarioHora * horasTrabalhadas
valorIr = salarioBruto * 0.11
valorInss = salarioBruto * 0.08
valorSindicato = salarioBruto * 0.05
salarioLiquido = salarioBruto - (valorIr + valorInss + valorSindicato)
print("Seu salário bruto é de:", salarioBruto)
print("Seu salário liquido é de:", salarioLiquido)