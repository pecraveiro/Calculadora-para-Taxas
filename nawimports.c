#include <stdio.h>

int main()
{
    // Declaração de variáveis para o cálculo dos preços dos produtos no site
    float precoDoProduto = 0;
    float iofPorcentagem = 0.0638;
    float precoDoProdutoComIOF = 0;
    float frete = 0;
    float taxa = 0;
    float totalEmDolares = 0;
    float dolarHoje = 0;
    float custoEmReais = 0;
    float precoFinalDoProduto = 0;
    float margemDeLucro = precoFinalDoProduto - custoEmReais;
    
    printf("Olá Nícolas, vamos começar os cáculos!\n");
    
    printf("\nDigite o valor do produto que será importado: ");
    scanf("%f", &precoDoProduto);
    
    precoDoProdutoComIOF = precoDoProduto * iofPorcentagem;
    
    printf("\nOk, com a taxa do IOF (Imposto sobre Operações Financeiras) o valor do seu produto fica no total de: %f", precoDoProdutoComIOF);
    
    printf("\nAgora faremos a soma do frete do produto, digite o valor do frete: ");
    scanf("%f", &frete);
    
    printf("\nBeleza! Faremos também a soma da taxa do produto, digite o valor da taxa: ");
    scanf("%f", &taxa);
    
    totalEmDolares = frete + taxa + precoDoProdutoComIOF;
    
    printf("\nO custo total em dólares do seu produto é: %f", totalEmDolares);
    
    printf("\nQuer saber o valor em dólares? Digite a o valor da cotação que deseja usar: ");
    scanf("%f", &dolarHoje);
    
    printf("\nEstamos fazendo a multiplicação para você... e o resultado é: %f", custoEmReais);
    
    custoEmReais = totalEmDolares * dolarHoje;
    
    printf("\nAgora, para finalizar, você decide o valor que deseja anunciar seu produto e calcularemos a sua margem de lucro: \n");
    scanf("%f", &precoFinalDoProduto);
    
    margemDeLucro = precoFinalDoProduto - custoEmReais;
    printf("Sua margem de lucro é: %f ", margemDeLucro);
    
    return 0;
}
