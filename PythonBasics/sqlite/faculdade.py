import sqlite3 as conector
import os
from model import Aluno

conex = conector.connect('Aula.db')
cursor = conex.cursor()

def criarTabAluno():
	try:
		cursor.execute('''CREATE TABLE ALUNO (
						matricula INT NOT NULL,
						nome TEXT NOT NULL,
						CURSO TEXT NOT NULL,
						PRIMARY KEY (matricula))''')
		conex.commit()
	except conector.DatabaseError as err:
		print("Erro de conexão com banco de dados: ", err)
	finally:
		input('press any key to continue')
		os.system('cls')
		#fechamento das conexões
		cursor.close()
		conex.close()

def criarTabTurma():
	try:
		cursor.execute('''CREATE TABLE TURMA (
						matricula INT NOT NULL,
						nome TEXT NOT NULL,
						aprovado BOOLEAN NOT NULL,
						FOREIGN KEY(matricula) REFERENCES ALUNO(matricula))''')
		conex.commit()
	except conector.DatabaseError as err:
		print("Erro de conexão com banco de dados: ", err)
	finally:
		input('press any key to continue')
		os.system('cls')
		#fechamento das conexões
		cursor.close()
		conex.close()

def insertAluno():
	try:
		cursor.execute('''INSERT INTO ALUNO (matricula, nome, curso)
							VALUES (001, 'Natan Borges', 'Ciencias da computação')''')
		conex.commit()
	except conector.DatabaseError as err:
		print("Erro de conexão com banco de dados: ", err)
	finally:
		input('press any key to continue')
		os.system('cls')
		#fechamento das conexões
		cursor.close()
		conex.close()

def insertClass():
	try:
		aluno = Aluno(2, 'Matheus Lucas', 'Administração')
		comando = '''INSERT INTO ALUNO VALUES (:matricula,:nome,:curso);'''
		cursor.execute(comando, vars(aluno))
		conex.commit()
		print(vars(aluno))
	except conector.DatabaseError as err:
		print("Erro de conexão com banco de dados: ", err)
	finally:
		input('press any key to continue')
		os.system('cls')
		#fechamento das conexões
		cursor.close()
		conex.close()

# EXECUTANDO AS FUNÇÕES #
#criarTabTurma()
#insertAluno()
#insertClass()

