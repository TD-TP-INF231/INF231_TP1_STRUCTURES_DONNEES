#include <stdio.h>
#include <stdlib.h>

// Fonction de comparaison pour qsort
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les éléments du tableau :\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    // Tri du tableau
    qsort(tab, n, sizeof(int), cmp);

    double mediane;
    if(n % 2 == 1) {
        mediane = tab[n / 2];  // Impair, élément du milieu
    } else {
        mediane = (tab[n/2 - 1] + tab[n/2]) / 2.0;  // Pair, moyenne des 2 éléments du milieu
    }

    printf("La médiane du tableau est : %.2f\n", mediane);

    return 0;
}
