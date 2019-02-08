algoritmo "MediaUNAERP"
var
   PP, PF, P1, P2, NF: Real
inicio
      Escreva("Nota Parcial: ")
      Leia(PP)
      Escreva("Peso de Nota Parcial: ")
      Leia(P1)
      PP <- PP * P1

      Escreva("Nota Final: ")
      Leia(PF)
      Escreva("Peso de Nota Final: ")
      Leia(P2)
      PF <- PF *P2


      NF <- PP + PF
      Escreva(NF)
fimalgoritmo
