programa {
  funcao inicio() {
    const real PESOA = 2.0
    const real PESOB = 3.0
    const real PESOC = 5.0
    real a,b,c, result

    escreva("Insira a primeira nota: ")
    leia(a)
    escreva("Insira a segunda nota: ")
    leia(b)
    escreva("Insira a terceira nota: ")
    leia(c)

    result = (a*PESOA) + (b*PESOB) + (c*PESOC) / (PESOA + PESOB + PESOC)
    escreva("A média é ", result)
  }
}
