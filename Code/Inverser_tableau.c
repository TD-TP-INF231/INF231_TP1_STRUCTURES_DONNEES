#include <stdio.h>

// Fonction pour inverser un tableau
void inverser_tableau(int tab[], int taille) {
    int temp;
    for (int i = 0; i < taille / 2; i++) {
        temp = tab[i];
        tab[i] = tab[taille - 1 - i];
        tab[taille - 1 - i] = temp;
    }
}

int main() {
    int taille;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tab[taille];

    // Saisie des éléments du tableau
    for (int i = 0; i < taille; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Tableau original : ");
    for (int i = 0; i < taille; i++)
        printf("%d ", tab[i]);
    printf("\n");

    inverser_tableau(tab, taille);

    printf("Tableau inversé : ");
    for (int i = 0; i < taille; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
