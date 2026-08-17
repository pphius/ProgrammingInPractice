#include <stdio.h>

int main() {
    
    char municipality[50];
    char mayor[100];
    int population;

    // Header
    printf("Municipal Financial Management System\n");
    printf("Welcome to Windhoek Municipality\n\n");

    // Input
    printf("Enter Municipality Name: ");
    scanf("%49[^\n]", municipality);           // Allows spaces in name

    printf("Enter Mayor: ");
    scanf(" %99[^\n]", mayor);                 // Allows spaces (e.g. "John Doe")

    printf("Enter Population: ");
    scanf("%d", &population);

    // Output
    printf("\n---------------------------------\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor        : %s\n", mayor);
    printf("Population   : %d\n", population);
    printf("As of 2025\n");
    printf("As of today 28 Jul 2026 @ 18:00\n");

    return 0;
}