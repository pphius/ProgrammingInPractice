#include <stdio.h>

int budget() {
    double revenue;
    double expenses;
    double balance;

    printf("MUNICIPAL BUDGET CALCULATOR\n"); printf("---------------------------\n");
    printf("Enter total revenue: ");
    scanf("%lf", &revenue);
    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\nRevenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    if (balance > 0) {
    printf("Surplus: %.2f\n", balance);
    }
    else if (balance < 0) {
    printf("Deficit: %.2f\n", -balance); }
    else {
    printf("The budget is balanced.\n");
    }
    return 0; }

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

    budget ();
    
    printf("As of today 12 Aug 2026 @ 18:00\n");

    return 0;
}