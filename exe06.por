programa {
  funcao inicio() {
    cadeia nome
    real valorHora, qtdHoras

    escreva("Informe seu nome: ")
    leia(nome)
    escreva("Informe seu n�mero de horas trabalhadas: ")
    leia(qtdHoras)
    escreva("Informe quanto voc� recebe por hora: ")
    leia(valorHora)

    escreva(nome, ", seu sal�rio � ", valorHora * qtdHoras)
  }
}
