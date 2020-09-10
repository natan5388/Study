# Armazena um nome e manipula entre letras e espaços
nome = input('Qual seu nome?\t>')
print('Sem espaços à esquerda fica:\n>' + nome.lstrip() + '<')
print('Sem espaços à direita fica:\n>' + nome.rstrip() + '<')
print('Sem espaços antes e depois fica:\n>' + nome.strip() + '<')
