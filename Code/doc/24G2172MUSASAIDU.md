Date : 24 septembre 2025


Rapport d'avancement individuel
Cours : Structures de Données II (INF231_EC2)
Responsable : PR Melatagia
Nom : MUSA SAIDU 
Matricule : 24G2172

Introduction

Ce rapport présente mon avancement individuel dans la réalisation des exercices assignés pour le TP de Structures de Données II. Les neuf exercices portent sur des opérations sur les matrices, tableaux et vecteurs, implémentés en langage C. Pour chaque exercice, j'explique la logique du programme, mon approche pour résoudre le problème, et ma contribution personnelle à l'élaboration du code.

1. Somme de matricesObjectif : Calculer la somme de deux matrices de même dimension.
Logique : Le programme lit les dimensions et les éléments de deux matrices, effectue l'addition élément par élément, et affiche le résultat.
Contribution personnelle : J'ai conçu la fonction sommeMatrice qui parcourt les matrices avec des boucles imbriquées pour calculer result[i][j] = A[i][j] + B[i][j]. J'ai également implémenté la fonction d'affichage pour vérifier le résultat.
Complexité : O(rows × cols).
Avancement : Programme terminé et testé avec plusieurs cas (matrices 2×2, 3×3).

2. Produit de matricesObjectif : Calculer le produit de deux matrices compatibles.
Logique : Le programme vérifie la compatibilité des dimensions, lit les matrices, et calcule le produit en utilisant la formule result[i][j] += A[i][k] * B[k][j].
Contribution personnelle : J'ai implémenté la fonction produitMatrice avec une triple boucle pour effectuer le produit matriciel. J'ai ajouté une vérification pour s'assurer que les dimensions sont compatibles avant le calcul.
Complexité : O(r1 × c1 × c2).
Avancement : Programme fonctionnel, testé avec des matrices de dimensions variées.

3. Recherche séquentielle dans un tableauObjectif : Trouver l'indice d'un élément dans un tableau.
Logique : Le programme lit un tableau et un élément à rechercher, puis parcourt le tableau linéairement pour trouver l'élément.
Contribution personnelle : J'ai écrit la fonction rechercheSequentielle qui retourne l'indice de l'élément ou -1 s'il est absent. J'ai testé le programme avec des cas où l'élément est présent ou absent.
Complexité : O(n).
Avancement : Programme complet et validé.

4. Multiplication a × b en utilisant exclusivement +1Objectif : Calculer a × b pour a, b > 0 en n'utilisant que l'opération +1.
Logique : Le programme utilise deux boucles imbriquées pour ajouter 1 à une variable result un nombre de fois égal à a × b.
Contribution personnelle : J'ai conçu la fonction multiplication en respectant la contrainte de n'utiliser que +1. J'ai ajouté une vérification pour garantir que a et b sont positifs.
Complexité : O(a × b).
Avancement : Programme terminé, bien que lent pour de grandes valeurs de a et b.

5. Tester si un tableau est triéObjectif : Vérifier si un tableau est trié en ordre croissant.
Logique : Le programme parcourt le tableau et vérifie si chaque élément est inférieur ou égal au suivant.
Contribution personnelle : J'ai implémenté la fonction estTrie qui retourne 1 si le tableau est trié, 0 sinon. J'ai testé avec des tableaux triés et non triés.
Complexité : O(n).
Avancement : Programme terminé et fonctionnel.

6. Trouver la médiane dans un tableauObjectif : Calculer la médiane d'un tableau.
Logique : Le programme trie le tableau, puis calcule la médiane (élément central pour n impair, moyenne des deux éléments centraux pour n pair).
Contribution personnelle : J'ai utilisé un tri à bulles dans la fonction trierTableau pour simplifier l'implémentation, puis calculé la médiane dans mediane. J'ai testé avec des tableaux de tailles paire et impaire.
Complexité : O(n²) à cause du tri.
Avancement : Programme complet, mais pourrait être optimisé avec un tri plus efficace.

7. Inverser un tableauObjectif : Inverser l'ordre des éléments d'un tableau.
Logique : Le programme échange les éléments des extrémités vers le centre jusqu'à la moitié du tableau.
Contribution personnelle : J'ai implémenté la fonction inverserTableau qui effectue les échanges avec une boucle unique. J'ai ajouté une fonction d'affichage pour montrer le tableau avant et après.
Complexité : O(n).
Avancement : Programme terminé et testé.

8. Produit vectoriel (en 3D)Objectif : Calculer le produit vectoriel de deux vecteurs 3D.
Logique : Le programme applique la formule du produit vectoriel pour calculer les trois composantes du vecteur résultant.
Contribution personnelle : J'ai écrit la fonction produitVectoriel en suivant la formule standard. J'ai testé avec des vecteurs orthogonaux pour vérifier l'exactitude.
Complexité : O(1).
Avancement : Programme complet et validé.

9. Produit vecteur × matriceObjectif : Calculer le produit d'un vecteur par une matrice.
Logique : Le programme lit un vecteur et une matrice, puis calcule le vecteur résultant en appliquant la formule result[i] = Σ(v[j] * mat[j][i]).
Contribution personnelle : J'ai implémenté la fonction produitVecteurMatrice et testé avec des matrices de différentes tailles. J'ai ajouté une fonction d'affichage pour le vecteur résultant.
Complexité : O(n × m).
Avancement : Programme terminé et fonctionnel.

Conclusion

J'ai personnellement implémenté et testé les neuf programmes demandés, en respectant les consignes de chaque exercice. Chaque programme est fonctionnel et a été validé avec des cas de test variés. Certaines implémentations, comme celle de la médiane, pourraient être optimisées (par exemple, en utilisant un tri plus efficace). Ce travail m'a permis de renforcer ma compréhension des structures de données et des algorithmes en C.