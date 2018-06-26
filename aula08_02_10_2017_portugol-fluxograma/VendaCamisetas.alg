algoritmo "VendaCamisetas"
var
   P, M, G, venda: Inteiro
inicio
      Escreva("Qual a quantidade de camisetas P? ")
      Leia(P)
      Escreva("Qual a quantidade de camisetas M? ")
      Leia(M)
      Escreva("Qual a quantidade de camisetas G? ")
      Leia(G)

      venda <- (P * 10) + (M * 12) + (G * 15)

      Escreva("O valor da venda é de R$ ",venda)
fimalgoritmo
