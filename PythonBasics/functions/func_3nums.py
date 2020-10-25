'''
Arquivo: estacio.py
Data: Sunday, 25th October 2020 5:22 pm
Autor: Natan De Moraes Borges (natanmoraes5388@gmail.com)
Descrição: pega 3 numeros e exibe 3 informações
'''
import os

def entra():
    num1 = int(input('Qual primeiro numero?\n>>>'))
    num2 = int(input('Qual primeiro numero?\n>>>'))
    num3 = int(input('Qual primeiro numero?\n>>>'))
    numeros = [num1, num2, num3]
    return numeros

def maior(numeros):
    numeros.sort()
    print(f'O {numeros[0]} é o menor')
    print(f'O {numeros[2]} é o maior')

def media(numeros):
    res = sum(numeros)
    print(f'\nA some é {res}')
    print(f'A media é: {res/3}')

numeros = entra()
maior(numeros)
input('Digite qualquer tecla pra continuar')
os.system("cls")
media(numeros)
print('Fim da execução')
