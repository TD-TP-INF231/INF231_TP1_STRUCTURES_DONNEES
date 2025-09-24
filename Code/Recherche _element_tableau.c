#include <stdio.h>

int main() {
    int n, i, element, trouve = 0;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];

    // Remplissage du tableau
    printf("Entrez les %d elements du tableau :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Élément à rechercher
    printf("Entrez l'element a rechercher : ");
    scanf("%d", &element);

    // Recherche séquentielle
    for (i = 0; i < n; i++) {
        if (tab[i] == element) {
            printf("Element %d trouve a la position %d\n", element, i + 1);
            trouve = 1;
            break; // on peut arrêter la recherche dès qu'on trouve
        }
    }

    if (!trouve) {
        printf("Element %d non trouve dans le tableau.\n", element);
    }

    return 0;
}
