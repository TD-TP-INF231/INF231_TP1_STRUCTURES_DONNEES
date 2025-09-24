#include <stdio.h>

int main() {
    int m, n, i, j;

    // Dimensions
    printf("Entrez le nombre de lignes de la matrice : ");
    scanf("%d", &m);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &n);

    int A[m][n];   // matrice
    int X[n];      // vecteur
    int Y[m];      // résultat

    // Saisie de la matrice
    printf("Entrez les elements de la matrice (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Saisie du vecteur
    printf("Entrez les elements du vecteur (%d):\n", n);
    for (j = 0; j < n; j++) {
        scanf("%d", &X[j]);
    }

    // Produit matrice * vecteur
    for (i = 0; i < m; i++) {
        Y[i] = 0; // initialisation
        for (j = 0; j < n; j++) {
            Y[i] += A[i][j] * X[j];
        }
    }

    // Affichage du résultat
    printf("Resultat (vecteur Y = A * X) :\n");
    for (i = 0; i < m; i++) {
        printf("%d\n", Y[i]);
    }

    return 0;
}
