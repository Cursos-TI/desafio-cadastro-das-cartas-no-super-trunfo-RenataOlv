#include <stdio.h>   // Para funções de entrada/saída como printf e scanf
#include <string.h>  // Para manipulação de strings, embora não estritamente necessário para este desafio.

// --- Definição da estrutura para uma Carta de Super Trunfo ---
// Esta struct agrupa todas as informações de uma única carta.
struct CartaSuperTrunfo {
    char estado;              // Ex: 'A', 'B', 'C', etc.
    char codigo_carta[5];     // Ex: "A01", "B00" (4 caracteres + terminador nulo '\0')
    char nome_cidade[50];     // Ex: "São Paulo" (até 49 caracteres + '\0')
    int populacao;            // Número de habitantes
    float area_km2;           // Área em quilômetros quadrados
    float pib_bilhoes;        // Produto Interno Bruto em bilhões de reais
    int pontos_turisticos;    // Quantidade de pontos turísticos
};

int main() {
    // --- Declaração de duas variáveis do tipo CartaSuperTrunfo ---
    // Cada uma representará uma carta diferente.
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    // --- Seção de Entrada de Dados para a PRIMEIRA CARTA ---
    printf("--- Insira os dados para a CARTA 1 ---\n");

    printf("Estado (letra de A a H): ");
    // O ' %c' antes do especificador %c ajuda a consumir qualquer '\n' ou espaço em branco pendente.
    scanf(" %c", &carta1.estado); 

    // Limpa o buffer de entrada após ler um caractere, essencial antes de ler strings com fgets.
    while (getchar() != '\n' && getchar() != EOF); 

    printf("Código da Carta (Ex: A01, B03): ");
    // fgets é mais seguro para ler strings, pois evita estouro de buffer e lê espaços.
    // Lembre-se que fgets inclui o '\n' se houver espaço na string.
    fgets(carta1.codigo_carta, sizeof(carta1.codigo_carta), stdin);
    // Remove o '\n' que fgets pode ter lido.
    carta1.codigo_carta[strcspn(carta1.codigo_carta, "\n")] = '\0'; 

    printf("Nome da Cidade: ");
    fgets(carta1.nome_cidade, sizeof(carta1.nome_cidade), stdin);
    carta1.nome_cidade[strcspn(carta1.nome_cidade, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &carta1.populacao);
    while (getchar() != '\n' && getchar() != EOF); // Limpa o buffer

    printf("Área (em km²): ");
    scanf("%f", &carta1.area_km2);
    while (getchar() != '\n' && getchar() != EOF); // Limpa o buffer

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib_bilhoes);
    while (getchar() != '\n' && getchar() != EOF); // Limpa o buffer

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    while (getchar() != '\n' && getchar() != EOF); // Limpa o buffer

    printf("\n"); // Linha em branco para melhor legibilidade

    // --- Seção de Entrada de Dados para a SEGUNDA CARTA ---
    printf("--- Insira os dados para a CARTA 2 ---\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);
    while (getchar() != '\n' && getchar() != EOF); 

    printf("Código da Carta (Ex: A01, B03): ");
    fgets(carta2.codigo_carta, sizeof(carta2.codigo_carta), stdin);
    carta2.codigo_carta[strcspn(carta2.codigo_carta, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(carta2.nome_cidade, sizeof(carta2.nome_cidade), stdin);
    carta2.nome_cidade[strcspn(carta2.nome_cidade, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &carta2.populacao);
    while (getchar() != '\n' && getchar() != EOF);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area_km2);
    while (getchar() != '\n' && getchar() != EOF);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib_bilhoes);
    while (getchar() != '\n' && getchar() != EOF);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    while (getchar() != '\n' && getchar() != EOF);

    printf("\n"); // Linha em branco para melhor legibilidade

    // --- Seção de Exibição dos Dados Cadastrados ---
    printf("--- Informações das Cartas Cadastradas ---\n\n");

    // Exibição da PRIMEIRA CARTA
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area_km2); // %.2f para 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", carta1.pib_bilhoes);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("\n"); // Linha em branco entre as cartas

    // Exibição da SEGUNDA CARTA
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib_bilhoes);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("\n");

    return 0; 
}