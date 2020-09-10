 # Arquivo: Exer002.py
 # Data: Segunda, 24 de Agosto de 2020
 # Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 # Descrição: Programa lê 2 numeros e realiza uma operação entre eles

n1 = int(input('Digite o primeiro numero: '))
n2 = int(input('Digite o segundo numero: '))
res = n1 + n2
print('A soma entre %d e %d é: %d'%(n1, n2, res))       # Quando usado essa forma o codigo fica visivelmente mais limpo 
                                                        # do que usar "+" para concatenar strings e variaveis 
