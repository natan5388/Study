import os

with open("test.txt", "a") as arquivo:     # abrindo arquivo no modo (a)append
	print('Deseja cadastrar um novo aluno? digite [S]. digite qualquer outra tecla para sair')
	while (input('R> ').upper()=='S'):
		aluno = input('Qual nome do aluno? ')
		nota1 = int(input('Qual a primeira nota do aluno? '))
		nota2 = int(input('Qual a segunda nota do aluno? '))
		arquivo.write("%s,%i,%i\n"%(aluno, nota1, nota2))     # Usando , como sepração entre os dados para serem lidos posteriormente com a função split

print('Programa executado com sucesso.')
input("Press Enter to continue...")
os.system("cls")
