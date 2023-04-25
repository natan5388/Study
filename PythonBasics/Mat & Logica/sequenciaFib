import turtle

t = turtle.Turtle()     #Turtle é responsavel pelo representacao grafica
turtle.speed("fastest")
turtle.tracer(0, 0)

sequenciaFib = [0,1]    #iniciando a sequencia com os elem. basicos
proxN = 0

for numeros in range(0, 15):
    t.circle(proxN, 90) #Desenha 90º a partir do raio passado em proxN
    
    proxN = sequenciaFib[-1] + sequenciaFib[-2]
    sequenciaFib.append(proxN)
    print(numeros,": ",sequenciaFib)
                       
    turtle.update()     #Atualiza o desenho
    
turtle.screensize()     #Define o tamanho da janela para o tamano do canvas 
t.getscreen()
turtle.done()           #exibe o resultado
