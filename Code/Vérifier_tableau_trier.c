#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les éléments du tableau :\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    int estTrie = 1; // 1 = vrai, 0 = faux

    for(int i = 0; i < n - 1; i++) {
        if(tab[i] > tab[i+1]) {
            estTrie = 0;
            break;
        }
    }

    if(estTrie)
        printf("Le tableau est trié en ordre croissant.\n");
    else
        printf("Le tableau n'est pas trié.\n");

    return 0;
}
