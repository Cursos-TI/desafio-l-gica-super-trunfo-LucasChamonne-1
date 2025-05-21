#include <stdio.h>

int main(){

    //Declarando as variáveis das cartas

    // Carta 1
    char estado[05] = "MG";
    char codigo_carta[05] = "E04";
    char cidade[20] = "Pirapora";
    int turisticos = 12;
    int populacao = 55606;
    float area = 549.514, pib = 2.90, densidade = 0;
    double pib_per_capita = 0;

    //Carta 2
    char estado2[05] = "MG";
    char codigo_carta2[05] = "A05";
    char cidade2[20] = "Belo_Horizonte";
    int turisticos2 = 80;
    int populacao2 = 2416339;
    float area2 = 331.401, pib2 = 105.83, densidade2 = 0;
    double pib_per_capita2 = 0;

    //Calculo Carta 1
    densidade = (float)populacao / area;
    pib_per_capita = (pib * 1e9) / populacao;
    //Calculo Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9) / populacao2;

    //Impressão dos dados da Carta
    printf("\n***** Carta %s *****\n", codigo_carta);

    printf("\nEstado: %s\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    //printf("Super Poder: %f\n", super_poder);

    printf("\nEstado: %s\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    //printf("Super Poder: %f\n", super_poder2);

    //Menu
    int opcao, opcao2;
    int comparacao, comparacao2;
    int resultado1, resultado2;
    printf("\n***** Bem vindo ao Desafio Super Trunfo *****\n");
    printf("\n↓↓ Selecione uma das opções abaixo ↓↓\n");
    printf("Opção 1 - Inicar o Jogo\n");
    printf("Opção 2 - Ver Regras\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: 
        printf("\nEscolha o primeiro atributo: \n");
        printf("1 - População\n");
        printf("2 - PIB\n");
        printf("3 - Densidade Populacional\n");
        printf("4 - Área\n");
        printf("5 - Pontos Turisticos\n");
        scanf("%d", &comparacao);
        printf("\n***** O atributo definido foi: *****\n");
        
        printf("\nEscolha o segundo atributo: \n");
        printf("1 - População\n");
        printf("2 - PIB\n");
        printf("3 - Densidade Populacional\n");
        printf("4 - Área\n");
        printf("5 - Pontos Turisticos\n");
        scanf("%d", &comparacao2);
        printf("\n***** O atributo definido foi: *****\n");

            switch (opcao2){
                case 1: 
                    printf("Atributo: População\n%s: %d\n%s: %d\n", cidade, populacao, cidade2, populacao2);
                    if (populacao > populacao2) printf("Vencedor: %s\n", cidade);
                    else if (populacao2 > populacao) printf("Vencedor: %s\n", cidade2);
                    else printf("Empate!\n");
                    break;
                case 2:
                    printf("Atributo: PIB\n%s: %.2f bilhões\n%s: %.2f bilhões\n", cidade, pib, cidade2, pib2);
                    if (pib > pib2) printf("Vencedor: %s\n", cidade);
                    else if (pib2 > pib) printf("Vencedor: %s\n", cidade2);
                    else printf("Empate!\n");
                    break;
                case 3:
                     printf("Atributo: Densidade Populacional\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", cidade, densidade, cidade2, densidade2);
                    if (densidade < densidade2) printf("Vencedor: %s\n", cidade);
                    else if (densidade2 < densidade) printf("Vencedor: %s\n", cidade2);
                    else printf("Empate!\n");
                    break;
                case 4:
                   printf("Atributo: Área\n%s: %.2f km²\n%s: %.2f km²\n", cidade, area, cidade2, area2);
                    if (area > area2) printf("Vencedor: %s\n", cidade);
                    else if (area2 > area) printf("Vencedor: %s\n", cidade2);
                    else printf("Empate!\n");
                    break;
                case 5:
                    printf("Atributo: Número de pontos turísticos\n%s: %d\n%s: %d\n", cidade, turisticos, cidade2, turisticos2);
                    if (turisticos > turisticos2) printf("Vencedor: %s\n", cidade);
                    else if (turisticos2 > turisticos) printf("Vencedor: %s\n", cidade2);
                    else printf("Empate!\n");
                    break;
                    default:
                        //printf("ERROR!");
                    break;
            }
    if(comparacao == comparacao2)
    {
        printf("Você escolheu o mesmo atributo, por favor escolha outro!\n");
    } else {

    switch (comparacao){
    case 1: 
        printf("Atributo: população\n%s: %d\n%s: %d\n", codigo_carta, populacao, codigo_carta2, populacao2);
        resultado2 = populacao > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Atributo: PIB\n%s: %.2f bilhões\n%s: %.2f bilhões\n", codigo_carta, pib, codigo_carta2, pib2);
        resultado2 = pib > pib2 ? 1 : 0;
        break;
    case 3:
        printf("Atributo: Densidade Populacional\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", codigo_carta, densidade, codigo_carta2, densidade2);
        resultado2 = densidade < densidade2 ? 1 : 0;
        break;
    case 4:
        printf("Atributo: Área\n%s: %.2f km²\n%s: %.2f km²\n", codigo_carta, area, codigo_carta2, area2);
        resultado2 = area > area2 ? 1 : 0;
        break;
    case 5:
        printf("Atributo: Número de pontos turísticos\n%s: %d\n%s: %d\n", codigo_carta, turisticos, codigo_carta2, turisticos2);
        resultado1 = turisticos > turisticos2 ? 1 : 0;
        break;        
    default:
        printf("ERROR!\n");
        break;
        
    }
    break;
    case 2:
        printf("\n***** Regras do jogo Super Trunfo *****\n");
        printf("Regra 0 - Cada jogador preencherar as informações de suas cartas para semrem declarados\n");
        printf("Regra 1 - O jogo consiste em comparar os atributos de duas cartas.\n");
        printf("Regra 2 - Os Jogadores devem escolher um atributo de uma carta para serem comparados.\n");
        printf("Regra 3 - A carta com o maior valor no atributo escolhido vençe.\n");
        printf("Regra 4 - A densidade demografica vence a carta com o menor valor.\n");
        printf("Regra 5 - A comparação deve ser feita apenas com os atributos: População, Área, PIB, densidade demografica e pontos turisticos.\n");
    break;
    default:
        printf("ERROR!!!");
    break;
    }
   
}

}