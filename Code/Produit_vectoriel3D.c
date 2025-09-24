#include <stdio.h>

// Fonction pour calculer le produit vectoriel de deux vecteurs 3D
void produit_vectoriel(int a[3], int b[3], int result[3]) {
    result[0] = a[1]*b[2] - a[2]*b[1];
    result[1] = a[2]*b[0] - a[0]*b[2];
    result[2] = a[0]*b[1] - a[1]*b[0];
}

int main() {
    int a[3], b[3], result[3];

    // Saisie du premier vecteur
    printf("Entrez les 3 composantes du premier vecteur : ");
    for(int i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    // Saisie du deuxième vecteur
    printf("Entrez les 3 composantes du deuxième vecteur : ");
    for(int i = 0; i < 3; i++)
        scanf("%d", &b[i]);

    produit_vectoriel(a, b, result);

    printf("Produit vectoriel : ");
    for(int i = 0; i < 3; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
