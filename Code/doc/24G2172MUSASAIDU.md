Date : 22 septembre 2025

Rapport sur les exercices de TP : Structures de Données II (INF231_EC2)
Responsable : PR Melatagia
Nom : MUSA SAIDU         Matricule : 24G2172

Introduction
Ce rapport présente les solutions aux neuf exercices proposés dans le cadre du TP de Structures de Données II. Chaque programme est implémenté en langage C et résout un problème spécifique lié aux structures de données, telles que les matrices, les tableaux et les vecteurs. Pour chaque exercice, nous expliquons la logique du programme, son fonctionnement et les étapes clés de l'algorithme.
1. Somme de matrices
Objectif : Calculer la somme de deux matrices de même dimension.
Logique :
Le programme demande à l'utilisateur les dimensions (lignes et colonnes) des matrices A et B.
Les éléments des matrices A et B sont saisis par l'utilisateur.
La fonction sommeMatrice parcourt chaque position (i,j) des matrices et calcule la somme : result[i][j] = A[i][j] + B[i][j].
La fonction afficheMatrice affiche la matrice résultante.
Complexité : O(rows × cols), où rows et cols sont les dimensions de la matrice.
Étapes clés :
Saisie des dimensions et des éléments des matrices A et B.
Calcul de la somme élément par élément.
Affichage du résultat.

2. Produit de matrices
Objectif : Calculer le produit de deux matrices compatibles (nombre de colonnes de A = nombre de lignes de B).
Logique :
Le programme vérifie si le produit est possible (c1 = r2).
Les éléments des matrices A (r1 × c1) et B (r2 × c2) sont saisis.
La fonction produitMatrice calcule chaque élément de la matrice résultante (r1 × c2) en effectuant la somme des produits : result[i][j] += A[i][k] * B[k][j] pour tout k.
La matrice résultante est affichée via afficheMatrice.
Complexité : O(r1 × c1 × c2), due à la triple boucle.
Étapes clés :
Vérification de la compatibilité des dimensions.
Saisie des matrices A et B.
Calcul du produit avec une triple boucle.
Affichage du résultat.

3. Recherche séquentielle dans un tableau
Objectif : Trouver l'indice d'un élément dans un tableau, ou indiquer qu'il n'existe pas.
Logique :
Le programme demande la taille du tableau, ses éléments et l'élément à rechercher (x).
La fonction rechercheSequentielle parcourt le tableau de manière linéaire et compare chaque élément avec x.
Si une correspondance est trouvée, l'indice est retourné ; sinon, -1 est retourné.
Complexité : O(n), où n est la taille du tableau.
Étapes clés :
Saisie de la taille du tableau et de ses éléments.
Saisie de l'élément à rechercher.
Parcours linéaire pour trouver l'élément.
Affichage de l'indice ou d'un message d'absence.

4. Multiplication a × b en utilisant exclusivement +1
Objectif : Calculer le produit de deux nombres positifs a et b en n'utilisant que l'opération d'incrémentation (+1).
Logique :
Le programme vérifie que a et b sont positifs.
La fonction multiplication utilise deux boucles imbriquées :
La boucle externe répète b fois.
La boucle interne ajoute 1 à la variable result a fois pour chaque itération de la boucle externe.
Le résultat est équivalent à a × b.
Complexité : O(a × b), car le programme effectue a additions pour chacune des b itérations.
Étapes clés :
Saisie de a et b.
Vérification que a et b sont positifs.
Calcul du produit via des incrémentations répétées.
Affichage du résultat.

5. Tester si un tableau est trié
Objectif : Vérifier si un tableau est trié en ordre croissant.
Logique :
Le programme demande la taille du tableau et ses éléments.
La fonction estTrie parcourt le tableau et vérifie si chaque élément est inférieur ou égal au suivant (tab[i] <= tab[i+1]).
Si une violation est trouvée, la fonction retourne 0 (non trié) ; sinon, elle retourne 1 (trié).
Complexité : O(n), où n est la taille du tableau.
Étapes clés :
Saisie du tableau.
Vérification de l'ordre croissant.
Affichage du résultat (trié ou non).

6. Trouver la médiane dans un tableau
Objectif : Calculer la médiane d'un tableau de nombres.
Logique :
Le programme demande la taille du tableau et ses éléments.
La fonction trierTableau utilise un tri à bulles pour trier le tableau en ordre croissant.
La fonction mediane calcule la médiane :
Si la taille n est impaire, la médiane est l'élément central (tab[n/2]).
Si n est paire, la médiane est la moyenne des deux éléments centraux ((tab[n/2-1] + tab[n/2])/2).
Complexité : O(n²) à cause du tri à bulles.
Étapes clés :
Saisie du tableau.
Tri du tableau.
Calcul de la médiane selon la parité de n.
Affichage de la médiane.

7. Inverser un tableau
Objectif : Inverser l'ordre des éléments d'un tableau.
Logique :
Le programme demande la taille du tableau et ses éléments.
La fonction inverserTableau échange les éléments des extrémités vers le centre : tab[i] avec tab[n-1-i] pour i allant de 0 à n/2.
La fonction afficheTableau affiche le tableau avant et après l'inversion.
Complexité : O(n/2) ≈ O(n), où n est la taille du tableau.
Étapes clés :
Saisie du tableau.
Échange des éléments pour inverser l'ordre.
Affichage du tableau avant et après.

8. Produit vectoriel (en 3D)
Objectif : Calculer le produit vectoriel de deux vecteurs en 3D.
Logique :
Le programme demande les trois composantes des vecteurs u et v.
La fonction produitVectoriel calcule le produit vectoriel selon la formule :
result[0] = u[1]*v[2] - u[2]*v[1]
result[1] = u[2]*v[0] - u[0]*v[2]
result[2] = u[0]*v[1] - u[1]*v[0]
Le résultat est affiché sous forme de vecteur (x, y, z).
Complexité : O(1), car le calcul concerne des vecteurs de taille fixe (3).
Étapes clés :
Saisie des composantes des vecteurs u et v.
Calcul du produit vectoriel.
Affichage du vecteur résultant.

9. Produit vecteur × matrice
Objectif : Calculer le produit d'un vecteur par une matrice.
Logique :
Le programme demande la taille du vecteur (n), le nombre de colonnes de la matrice (m), les éléments du vecteur et de la matrice (n × m).
La fonction produitVecteurMatrice calcule chaque composante du vecteur résultant : result[i] = Σ(v[j] * mat[j][i]) pour j de 0 à n-1.
Le vecteur résultant est affiché.
Complexité : O(n × m), où n est la taille du vecteur et m le nombre de colonnes de la matrice.
Étapes clés :
Saisie du vecteur et de la matrice.
Calcul du produit vecteur-matrice.
Affichage du vecteur résultant.

Conclusion
Les programmes proposés résolvent efficacement les problèmes posés en utilisant des structures de données de base (tableaux, matrices, vecteurs). Chaque solution est implémentée en C avec une approche claire et modulaire, facilitant la compréhension et la maintenance du code. Les complexités temporelles ont été indiquées pour chaque algorithme, et les programmes incluent des vérifications de base pour garantir leur robustesse.

