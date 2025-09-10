algoritmo "Divisores"
var
   num, i: inteiro

inicio
   escreva("Digite um número: ")
   leia(num)

   escreval("Divisores de ", num, ":")
   para i de 1 ate num faca
      se (num % i = 0) entao
         escreva(i, " ")
      fimse
   fimpara
fimalgoritmo