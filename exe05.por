programa {
  funcao inicio() {
    real a,b,c, result

    escreva("Insira a primeira nota: ")
    leia(a)
    escreva("Insira a segunda nota: ")
    leia(b)
    escreva("Insira a terceira nota: ")
    leia(c)

    result = (a*2 + b*3 + c*5) / 3
    escreva("A média é ", result)
  }
}
