algoritmo "TempoSalario"
var
   time, salario: Real
inicio
      Escreva("Qual o tempo de servico? ")
      Leia(time)
      Escreva("Qual o salario? ")
      Leia(salario)
      
      Se time < 10 entao
         salario <- salario * 1.10
      senao
           salario <- salario * 1.25
      fimSe
      Escreva("Seu novo salario e: R$", salario)
fimalgoritmo
