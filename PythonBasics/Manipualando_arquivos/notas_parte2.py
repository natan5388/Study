import os

with open("test.txt", "r") as arquivo:     #Abre o arquivo no modo "r" leitura
	print('Arquivo aberto com sucesso.')
	for linha in arquivo:
		itens = linha.split(",")      # aponta o elemento separador dos dados como "," e add eles a uma lista intens[] e vai repetindo linha por linha.
		media = float((int(itens[1])+int(itens[2]))/2)
		print("o aluno %s tirou as notas %i, %i e sua media foi %.2f \n"%(itens[0],int(itens[1]),int(itens[2]),media))
		input("Press Enter to continue...")
		os.system("cls")

input("Programa executado com sucesso Press Enter to continue...")
os.system("cls")
