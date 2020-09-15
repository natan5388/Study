# Programa feito por Natan de moraes(natanmoraes5388@gmail.com)
# Codigo referente as questões do capitulo 3 sobre edição de listas (Editando lista de convidados de uma festa)
# Uso: lista.metodo()

import os
lista = ['Matheus', 'Jackson', 'Ana', 'Honorio', 'Harisom']
print('Olá %s, você foi convidado para minha festa'%(lista[0]))
print('Olá %s, você foi convidado para minha festa'%(lista[1]))
print('Olá %s, você foi convidado para minha festa'%(lista[2]))
print('Olá %s, você foi convidado para minha festa'%(lista[3]))
print('Olá %s, você foi convidado para minha festa'%(lista[4]))
input("Press Enter to continue...")                                 # Pausa apos a impressão para que o usuario leia as informações

# Q3.5 Removendo um membro da lista e add no mesmo lugar
os.system("cls")
ausen = int(input('Quam não vai poder comparecer? '))               #Ausen recebe o valor da posição na lista
removido1 = lista.pop(ausen)
print('É uma pena que você não possa vir, %s'%removido1)
lista.insert(ausen, input('Quem você deseja convidar no lugar? '))  #Edita a mesma posição de ausen
print(lista)
input("Press Enter to continue...")
os.system("cls")

#Ordenando em ordem Alfabetica
for convidados in lista:
    print('Seja bem vindo,',convidados.title())
