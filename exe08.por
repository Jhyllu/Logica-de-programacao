programa {
  funcao inicio() {
    cadeia nome
    real sal, vendas, resultado

    escreva("Informe seu nome: ")
    leia(nome)
    escreva("Informe seu salário fixo: ")
    leia(sal)
    escreva("Informe a quantidade de vendas efetuadas por mês (em dinheiro): ")
    leia(vendas)

    resultado = sal + vendas*0.15

    escreva("Total a receber: ", resultado)

  }
}
