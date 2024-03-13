programa {
  funcao inicio() {
    const real VALORCARRO = 70.00
    const real VALORKM = 0.15
    real km, resultado
    inteiro dias

    escreva("Informe a quantidade de km percorrido: ")
    leia(km)
    escreva("Informe a quantidade de dias pelos quais ele foi alugado: ")
    leia(dias)

    resultado = VALORCARRO * dias + VALORKM * km

    escreva("Valor a pagar: ", resultado)
  }
}
