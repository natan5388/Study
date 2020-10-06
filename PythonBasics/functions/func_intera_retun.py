'''
Arquivo: funcao_ret_int.py
Data: Tuesday, 6th October 2020 5:37 pm
Autor: Natan De Moraes Borges (natanmoraes5388@gmail.com)
Descrição: Exmemplo de uma função Interativa e usa return para passar de volta um valor a outra função
'''

def desc():
    p_nome=input('Qual seu primeiro nome?\n>>> ')
    u_nome=input('Qual seu ultimo nome?\n>>> ')
    idade=int(input('Quantos anos?\n>>> '))
    '''
    print(f'Cliente: {p_nome} {u_nome} tem {idade} Anos, Seja bem vindo') #Caso quisesse fazer em 1 só função
    '''
    return p_nome, u_nome, idade          #volta os valores à onde ela foi chamada

def saida():
    p_nome, u_nome, idade = desc()       #Chama as Variaveis usando a 1 função n pode esquecer
    print('Teste')  
    print(f'Cliente: {p_nome} {u_nome} tem {idade} Anos, Seja bem vindo')
    
saida()
