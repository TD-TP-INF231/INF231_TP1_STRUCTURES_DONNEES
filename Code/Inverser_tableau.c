#include <stdio.h>

void inverser_tableau(int tab[], int taille) {
    int temp;
    for (int i = 0; i < taille / 2; i++) {
        temp = tab[i];
        tab[i] = tab[taille - 1 - i];
        tab[taille - 1 - i] = temp;
    }
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tab) / sizeof(tab[0]);

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
