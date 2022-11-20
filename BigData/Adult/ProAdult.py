import pandas as pd
import numpy as np
import statistics as statcs
import matplotlib.pyplot as plt
from time import sleep
from os import system

#Data source: https://archive.ics.uci.edu/ml/datasets/Adult

""" Esse formato de endereço abaixo foi usado para trabalhar com varios desses csv's no vscode por que ele lê 
primeiro a pasta raiz do projeto """
dataf = pd.read_csv('Adult/adult.csv')
"""
É importante verificar os valores vazios OU NULOS e substituir-los no DataFrame faça isso para todas as 
colunas para evitar valores vazios nas estatisticas ou mesmo quebrados.
"""
#separando as colunas numericas quantitativas
idade = dataf["idade"] 
ganhoCapit = dataf["ganhoCapit"]
perdaCapit = dataf["perdaCapit"]
horasSem = dataf["horasSem"]

def namestr(obj, namespace):    #função auxiliar para a proxima que pega o nome do parametro passado
    return [name for name in namespace if namespace[name] is obj]

def estatistica(coluna):       #imprimindo as estatisticas da coluna
    print("Dados sobre a coluna: ", namestr(coluna, globals()))     #Nome da coluna parametro da func
    print("A media é: ", np.mean(coluna, axis=0))                   
    print("O desvio padrão é: ", np.std(coluna, axis=0))
    print("A moda é: ", statcs.mode(coluna))
    print("A mediana é: ", np.median(coluna, axis=0))
    print("Valor min: ", np.min(coluna))
    print("Valor max: ", np.max(coluna))
    # Exibindo valores em ordem crescente e decrescente
    print(coluna.sort_values(ascending=False))  #Decrescente
    print(coluna.sort_values(ascending=True))   
    sleep(5)
    # FIM DA FUNÇÃO

estatistica(idade)
estatistica(ganhoCapit)
estatistica(perdaCapit)
estatistica(horasSem)

# Exibindo valores acima e abaixo da media para cada coluna
# 
print("Imprimindo sobre a idade:")
menor = dataf[(dataf["idade"] < dataf["idade"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["idade"] > dataf["idade"].mean())]
print("Maior que a media:\n", maior)
#
print("Imprimindo sobre o GanhoCapit:") 
menor = dataf[(dataf["ganhoCapit"] < dataf["ganhoCapit"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["ganhoCapit"] > dataf["ganhoCapit"].mean())]
print("Maior que a media:\n", maior)
#
print("Imprimindo sobre a perdaCapit:")
menor = dataf[(dataf["perdaCapit"] < dataf["perdaCapit"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["perdaCapit"] > dataf["perdaCapit"].mean())]
print("Maior que a media:\n", maior)
#
print("Imprimindo sobre a horas sem.:")
menor = dataf[(dataf["horasSem"] < dataf["horasSem"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["horasSem"] > dataf["horasSem"].mean())]
print("Maior que a media:\n", maior)

"""
FAZENDO PLOT COM O DF
"""
classes = np.unique(dataf['sexo'])
atrib1 = 0  #idade 
atrib2 = 12 #horasSem

#Dizendo os marcadores a usar no grafico
markers = [".","*","+"]

# Pegando todas as observações da mesma classe.
for i in range(len(classes)):
    #Lembrar de alterar a a classe abaixo
    classe = dataf.loc[dataf['sexo']==classes[i]]
    #Pegando os atributos(coluna no DF -1) e lista de marcadores 
    plt.scatter(classe.iloc[:, atrib1], classe.iloc[:, atrib2], marker=markers[i], label=classes[i])

# Configurando para aparecer o attr1 no eixo x, e o attr2 no eixo y
plt.xlabel(dataf.columns.values[atrib1])
plt.ylabel(dataf.columns.values[atrib2])
# Para aparecer a legenda. Neste caso será o mapeamento de cada classe para cada cor
# lembrando de modificar a legenda para cada plot
plt.legend(["Female","Male"])
plt.show()
