programa {
  funcao inicio() {
    const real PORCENT_COMISSAO = 0.2
    const inteiro COMISSAO = 5
    real valorVendas, total
    inteiro numSapatos
    escreva("Informe o valor total das vendas: ")
    leia(valorVendas)
    escreva("Informe o n�mero de sapatos vendidos: ")
    leia(numSapatos)

    total = valorVendas*PORCENT_COMISSAO + COMISSAO*numSapatos
    escreva("Sal�rio total ", total)
  }
}
