import pandas as pd
import numpy as np
import statistics as statcs
import matplotlib.pyplot as plt
from time import sleep
from os import system

#Data source: https://github.com/pandas-dev/pandas/raw/main/doc/data/titanic.csv

""" Esse formato de endereço abaixo foi usado para trabalhar com varios desses csv's no vscode por que ele lê 
primeiro a pasta raiz do projeto """
dataf = pd.read_csv('TitanicPassag/titanic.csv')
"""
É importante verificar os valores vazios OU NULOS e substituir-los no DataFrame faça isso para todas as 
colunas para evitar valores vazios nas estatisticas ou mesmo quebrados.
"""
teste = pd.isna(dataf["tarifa"])
# print(teste) "SE QUISER TER UM RETORNO DAS LINHAS NULAS"
# dataf["coluna"].fillna(mediadacoluna, metodo) assim que substituimos valores nulos e vazios em uma coluna
dataf["tarifa"].fillna(dataf['tarifa'].mean(), inplace = True)
dataf["idade"].fillna(dataf['idade'].mean(), inplace = True)
dataf["pais-filhos"].fillna(dataf['pais-filhos'].mean(), inplace = True)
dataf["irm-conjuge"].fillna(dataf['irm-conjuge'].mean(), inplace = True)

# IMPRIMINDO OS TIPOS DE CADA COLUNA
print("TIPOS DOS DADOS NA TABELA:")
tipos = dataf.dtypes
print(tipos)
sleep(5)

#separando as colunas numericas
tarifa = dataf["tarifa"] 
idade = dataf["idade"]
parentes = dataf["pais-filhos"]     #nº de pais ou filhos(a) a bordo
irmEsp = dataf["irm-conjuge"]       #numero de irmãos e conj a bordo

def namestr(obj, namespace):        #função auxiliar para a proxima pega o nome do parametro passado
    return [name for name in namespace if namespace[name] is obj]

def estatistica(coluna):            #imprimindo as estatisticas da coluna
    print("Dados sobre a coluna: ", namestr(coluna, globals()))         #Nome da coluna parametro da func
    print("A media é: ", np.mean(coluna, axis=0))       #função da media
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
estatistica(tarifa)
estatistica(irmEsp)
estatistica(parentes)

# Exibindo valores acima e abaixo da media para cada coluna
# 
print("MAior e menor que a media [tarifa]...")
menor = dataf[(dataf["tarifa"] < dataf["tarifa"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["tarifa"] > dataf["tarifa"].mean())]
print("Maior que a media:\n", maior)
#
print("MAior e menor que a media [idade]...") 
menor = dataf[(dataf["idade"] < dataf["idade"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["idade"] > dataf["idade"].mean())]
print("Maior que a media:\n", maior)
#
print("Maior e menor que a media [irm-conjuge]...")
menor = dataf[(dataf["irm-conjuge"] < dataf["irm-conjuge"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["irm-conjuge"] > dataf["irm-conjuge"].mean())]
print("Maior que a media:\n", maior)
#
print("Maior e menor que a media [pais-filhos]...")
menor = dataf[(dataf["pais-filhos"] < dataf["pais-filhos"].mean())]
print("Menor que a media:\n", menor)
maior = dataf[(dataf["pais-filhos"] > dataf["pais-filhos"].mean())]
print("Maior que a media:\n", maior)

"""
FAZENDO PLOT COM O DF
"""
classes = np.unique(dataf['Pclasse'])
atrib1 = 5  #idade
atrib2 = 9  #Tarifa

#Dizendo os marcadores a usar no grafico
markers = [".","*","+"]

# Pegando todas as observações da mesma classe.
for i in range(len(classes)):
    #Lembrar de alterar a a classe abaixo
    classe = dataf.loc[dataf['Pclasse']==classes[i]]
    #Pegando os atributos(coluna no DF -1) e lista de marcadores 
    plt.scatter(classe.iloc[:, atrib1], classe.iloc[:, atrib2], marker=markers[i], label=classes[i])

# Configurando para aparecer o attr1 no eixo x, e o attr2 no eixo y
plt.xlabel(dataf.columns.values[atrib1])
plt.ylabel(dataf.columns.values[atrib2])
# Para aparecer a legenda. Neste caso será o mapeamento de cada classe para cada cor
# lembrar de modificar a legenda para cada plot
plt.legend(["Classe 1", "Classe 2", "Classe 3"])
plt.show()
