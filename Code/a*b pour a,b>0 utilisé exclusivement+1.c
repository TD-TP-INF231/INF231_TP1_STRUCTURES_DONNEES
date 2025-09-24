#include <stdio.h>

int multiplication(int a, int b) {
    int result = 0;
    
    // On choisit de répéter l'addition le moins de fois possible
    int min = a < b ? a : b;
    int max = a > b ? a : b;
    
    // Ajouter `max` à `result`, `min` fois
    for (int i = 0; i < min; i++) {
        for (int j = 0; j < max; j++) {
            result += 1; // utilisation stricte de +1
        }
    }
    
    return result;
}

int main() {
    int a, b;
    printf("Entrez deux nombres positifs a et b : ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Les nombres doivent etre positifs.\n");
        return 1;
    }

    printf("%d x %d = %d\n", a, b, multiplication(a, b));
    return 0;
}
