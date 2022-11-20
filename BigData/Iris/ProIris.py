import pandas as pd
import numpy as np
import statistics as statcs
import matplotlib.pyplot as plt
from time import sleep
from os import system

#Data source: https://archive.ics.uci.edu/ml/datasets/iris

""" Esse formato de endereço abaixo foi usado para trabalhar com varios desses csv's no vscode por que ele lê 
primeiro a pasta raiz do projeto """
dataf = pd.read_csv('Iris/iris.csv')

# IMPRIMINDO OS TIPOS DE CADA COLUNA
print("TIPOS DOS DADOS NA TABELA:")
tipos = dataf.dtypes
print(tipos)
sleep(5)
#system('cls')

#separando as colunas numericas
sepalComp = dataf["sepalComp"] 
sepalLarg = dataf["sepalLarg"]
petalComp = dataf["petalComp"]
petalLarg = dataf["petalLarg"]

def namestr(obj, namespace): #função auxiliar para a proxima pega o nome do parametro passado
    return [name for name in namespace if namespace[name] is obj]

def estatistica(coluna):       #imprimindo as estatisticas da coluna
    print("Dados sobre a coluna: ", namestr(coluna, globals()))         #Nome da coluna parametro da func
    print("A media é: ", np.mean(coluna, axis=0)) #função da media
    print("O desvio padrão é: ", np.std(coluna, axis=0))
    print("A moda é: ", statcs.mode(coluna))
    print("A mediana é: ", np.median(coluna, axis=0))
    print("Valor min: ", np.min(coluna))
    print("Valor max: ", np.max(coluna))
    # Exibindo valores em ordem crescente e decrescente
    print(coluna.sort_values(ascending=False))  #Decrescente
    print(coluna.sort_values(ascending=True))   #Crescente
    sleep(5)
    # FIM DA FUNÇÃO

estatistica(sepalComp)
estatistica(sepalLarg)
estatistica(petalComp)
estatistica(petalLarg)

# Exibindo valores acima e abaixo da media para cada coluna
#
print("Imprimindo sobre a sepala...")
menor = dataf[(dataf["sepalComp"] < dataf["sepalComp"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["sepalComp"] > dataf["sepalComp"].mean())]
print("Maior que a media:\n", maior)
#
menor = dataf[(dataf["sepalLarg"] < dataf["sepalLarg"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["sepalLarg"] > dataf["sepalLarg"].mean())]
print("Maior que a media:\n", maior)
#
print("Imprimindo sobre a petala...") 
menor = dataf[(dataf["petalComp"] < dataf["petalComp"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["petalComp"] > dataf["petalComp"].mean())]
print("Maior que a media:\n", maior)
#
menor = dataf[(dataf["petalLarg"] < dataf["petalLarg"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["petalLarg"] > dataf["petalLarg"].mean())]
print("Maior que a media:\n", maior)

"""
FAZENDO PLOT COM O DF
"""
classes = np.unique(dataf['classe'])
atrib1 = 0  
atrib2 = 1

#Dizendo os marcadores a usar no grafico
markers = [".","*","+"]

# Pegando todas as observações da mesma classe.
for i in range(len(classes)):
    #Lembrar de alterar a a classe abaixo
    classe = dataf.loc[dataf['classe']==classes[i]]
    #Pegando os atributos(coluna no DF -1) e lista de marcadores 
    plt.scatter(classe.iloc[:, atrib1], classe.iloc[:, atrib2], marker=markers[i], label=classes[i])

# Configurando para aparecer o attr1 no eixo x, e o attr2 no eixo y
plt.xlabel(dataf.columns.values[atrib1])
plt.ylabel(dataf.columns.values[atrib2])
# Para aparecer a legenda. Neste caso será o mapeamento de cada classe para cada cor
# lembrar de modificar a legenda para cada plot
plt.legend(["Iris Setosa","Iris Versicolour","Iris Virginica"])
plt.show()
