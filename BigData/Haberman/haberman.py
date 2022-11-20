import pandas as pd
import numpy as np
import statistics as statcs
import matplotlib.pyplot as plt
from time import sleep
from os import system

#Data source: https://archive.ics.uci.edu/ml/datasets/haberman's+survival

""" Esse formato de endereço abaixo foi usado para trabalhar com varios desses csv's no vscode por que ele lê 
primeiro a pasta raiz do projeto """
dataf = pd.read_csv('Haberman/haberman.csv')

# IMPRIMINDO OS TIPOS DE CADA COLUNA
print("TIPOS DOS DADOS NA TABELA:")
tipos = dataf.dtypes
print(tipos)
sleep(5)
#system('cls')

#separando as colunas numericas
idade = dataf["age"] 
ano = dataf["year"]
numerolinf = dataf["numLinfNodAx"] 

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

estatistica(idade)
estatistica(ano)
estatistica(numerolinf)

# Exibindo valores acima e abaixo da media para cada coluna
#
print("Imprimindo sobre a idade do paciente...")
menor = dataf[(dataf["age"] < dataf["age"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["age"] > dataf["age"].mean())]
print("Maior que a media:\n", maior)
#
print("Imprimindo sobre ano da cirurgia...") 
menor = dataf[(dataf["year"] < dataf["year"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["year"] > dataf["year"].mean())]
print("Maior que a media:\n", maior)
#
print("Imprimindo sobre num de linfonodos axilares...")
menor = dataf[(dataf["numLinfNodAx"] < dataf["numLinfNodAx"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["numLinfNodAx"] > dataf["numLinfNodAx"].mean())]
print("Maior que a media:\n", maior)
#
"""
FAZENDO PLOT COM O DF
"""
classes = np.unique(dataf['sobrevivencia'])
atrib1 = 2  #NlinfoAxi
atrib2 = 0  #idade

#Dizendo os marcadores a usar no grafico
markers = ["+","x","*"]

# Pegando todas as observações da mesma classe.
for i in range(len(classes)):
    #Lembrar de alterar a a classe abaixo
    classe = dataf.loc[dataf['sobrevivencia']==classes[i]]
    #Pegando os atributos(coluna no DF -1) e lista de marcadores 
    plt.scatter(classe.iloc[:, atrib1], classe.iloc[:, atrib2], marker=markers[i], label=classes[i])

# Configurando para aparecer o attr1 no eixo x, e o attr2 no eixo y
plt.xlabel(dataf.columns.values[atrib1])
plt.ylabel(dataf.columns.values[atrib2])
# Para aparecer a legenda. Neste caso será o mapeamento de cada classe para cada cor
# lembrar de modificar a legenda para cada plot
plt.legend(["Morte precoce", "Vida prolongada"])
plt.show()
