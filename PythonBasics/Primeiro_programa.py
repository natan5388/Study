# Programa feito em 20/08/2020 por Natan de moraes(natanmoraes5388@gmail.com)
# Programa que ler algumas variáveis (strg e int) sobre usuario e as imprime com uma mensagem calorosa. 
import os

name = input('Qual seu nome? ')
idade = input('Qual sua idade? ')
genero = input('Qual seu sexo? ')
print(name, idade, genero)
print("\n")           #pula uma linha
#Desafio 2
os.system("cls")      #Limpa a tela do console ou cmd
print('Bem vindo(a) %s' %name )     #Uma opção tambem possivel para imprimir variaveis em uma string particulamente mais parecida com C
#Desafio 3
dia = input('Dia de Nascimento? ')
mes = input('Mes de Nacimento?(numeros) ')
ano = input('Ano em que Nasceu? ')
os.system("cls")
print(f"Data de nascimento: {dia}/{mes}/{ano})
