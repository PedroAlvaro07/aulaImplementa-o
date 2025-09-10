algoritmo "Combinatoria"
var
   n, k: inteiro

funcao fatorial(x: inteiro): inteiro
var
   i, resultado: inteiro
inicio
   resultado <- 1
   para i de 1 ate x faca
      resultado <- resultado * i
   fimpara
   retorne resultado
fimfuncao

inicio
   escreva("Digite o valor de n: ")
   leia(n)
   escreva("Digite o valor de k: ")
   leia(k)

   se (n < k) entao
      escreval("Erro: n deve ser maior ou igual a k.")
   senao
      escreval("C(", n, ",", k, ") = ", fatorial(n) / (fatorial(k) * fatorial(n-k)))
   fimse
fimalgoritmo
