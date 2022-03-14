#include <stdio.h>

int main()
{
    // Declaração de variáveis para o cálculo dos preços dos produtos no site
    float precoDoProduto = 0;
    float iofPorcentagem = 0.0638;
    float precoDoProdutoComIOF = precoDoProduto * iofPorcentagem;
    int frete = 0;
    int taxa = 0;
    float totalEmDolares = frete + taxa + precoDoProdutoComIOF;
    float dolarHoje = 0;
    float custoEmReais = totalEmDolares * dolarHoje;
    float precoComCustos = 0;
    float precoFinalDoProduto = 0;
    float margemDeLucro = precoFinalDoProduto - precoComCustos;
    
    printf("Olá Nícolas, vamos começar os cáculos!\n");
    
    printf("Digite o valor do produto que será importado:\n ");
    scanf("%f", &precoDoProduto);
    
    printf("Ok, com a taxa do IOF (Imposto sobre Operações Financeiras) o valor do seu produto fica no total de: \n", &precoDoProdutoComIOF);
    
    printf("Agora faremos a soma do frete do produto, digite o valor do frete: \n");
    scanf("%i", &frete);
    
    printf("Beleza! Faremos também a soma da taxa do produto, digite o valor da taxa: \n");
    scanf("%i", &taxa);
    
    printf("O custo total em dólares do seu produto é: \n", &totalEmDolares);
    
    printf("Quer saber o valor em dólares? Digite a o valor da cotação que deseja usar: \n");
    scanf("%f", &dolarHoje);
    
    printf("Estamos fazendo a multiplicação para você... e o resultado é: \n", &custoEmReais);
    
    printf("Agora, para finalizar, você decide o valor que deseja anunciar seu produto e calcularemos a sua margem de lucro: \n");
    scanf("%f", &precoFinalDoProduto);
    
    printf("Sua margem de lucro é: ", &margemDeLucro);
    
    return 0;
}
