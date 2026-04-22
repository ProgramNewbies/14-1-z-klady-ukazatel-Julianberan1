#include <stdio.h>

int main() {
    int a, b, c;

// Načtení od uživatele
    if (scanf("%d %d %d", &a ,&b, &c) != 3) 
    return 1;
// Vytvoření ukazatelů
    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;
// 1. Výpočet součtu
    int soucet = *p_a + *p_b + *p_c;
// 2. Nalezení maxima přes ukazatele
    int max = *p_a;
    if (*p_b > max) max = *p_b;
    if (*p_c > max) max = *p_c;
// Výpis výsledků
    printf("Soucet: %d\n", soucet);
    printf("Maximum: %d\n", max);
// Test sudosti/lichosti součtu
    if (soucet % 2 == 0) {
        printf("Soucet je sudy\n");
    } else {
        printf("Soucet je lichy\n");
    }
    return 0;
}