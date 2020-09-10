# Programa feito por Natan de moraes(natanmoraes5388@gmail.com)
# Cria e add elementos a uma lista
import os

carros = ['l200', 'Hilux', 'Frontier']
print(carros)       # É esperado que ele irá imprimir todos os membros da lista sem nenhuma formatação
input("Press Enter to continue...")     # Pausa apos a impressão para que o usuario leia as informações
os.system("cls")
new_car = input('Add um modelo a lista: ')
carros.append(new_car)      # Metodo append() adicona ao final da lista
print(carros)
# Agora será removido 1 elemento da lista
os.system("cls")
i = int(input('Diga a posição do elemento a ser removido:"Obs cotando a partir do 0" '))
removido = carros.pop(i)
print(carros)
print('O elemento removido foi: ', removido)
