#include <stdio.h>

int main() {
    int i, j;
    int rows, cols;

    // Saisie des dimensions de la matrice
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &rows);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &cols);

    int A[rows][cols];
    int B[rows][cols];
    int C[rows][cols];

    // Saisie de la première matrice
    printf("Entrez les éléments de la première matrice :\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Saisie de la deuxième matrice
    printf("Entrez les éléments de la deuxième matrice :\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Calcul de la somme
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Affichage du résultat
    printf("La somme des matrices est :\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
