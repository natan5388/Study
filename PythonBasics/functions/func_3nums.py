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
    return(num1,num2,num3)

def maior():
    num1, num2, num3 = entra()
    numeros = [num1,num2,num3]
    numeros.sort()
    print(f'O {numeros[0]} é o menor')
    print(f'O {numeros[2]} é o maior')

def media():
    num1, num2, num3 = entra()
    res = num1 + num2 + num3
    print(f'\nA some é {res}')
    print(f'A media é: {res/3}')

maior()
input('Digite qualquer tecla pra continuar')
os.system("cls")
media()
print('Fim da execução')
