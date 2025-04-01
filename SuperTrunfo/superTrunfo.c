#include <stdio.h>

int main() {
    char estado1[] = "Pernambuco", estado2[] = "Rio Grande do Sul";
    char codigo1[] = "A01", codigo2[] = "A02";
    char cidade1[] = "Recife", cidade2[] = "Porto Alegre";
    int populacao1 = 1653461, populacao2 = 1400000;
    double area1 = 218.50, area2 = 1521.11, pib1 = 75.39, pib2 = 54.64;
    int pontos1 = 50, pontos2 = 40;
    
    
    printf("Carta 1:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);
    
    printf("Carta 2:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);
    
    
    double valor1, valor2;
    return 0;
}  


