programa {
  funcao inicio() {
    cadeia nome
    real valorHora, qtdHoras

    escreva("Informe seu nome: ")
    leia(nome)
    escreva("Informe seu número de horas trabalhadas: ")
    leia(qtdHoras)
    escreva("Informe quanto você recebe por hora: ")
    leia(valorHora)

    escreva(nome, ", seu salário é ", valorHora * qtdHoras)
  }
}
