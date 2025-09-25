Date : 24 septembre 2025


Rapport d'avancement individuel
Cours : Structures de Données II (INF231_EC2)
Responsable : PR Melatagia
Nom : MUSA SAIDU 
Matricule : 24G2172

Introduction

Ce rapport présente mon avancement individuel dans la réalisation de deux exercices assignés pour le TP de Structures de Données II : la recherche séquentielle dans un tableau et la multiplication de deux nombres positifs a × b en n'utilisant que l'opération +1. Les programmes ont été implémentés en langage C. Pour chaque exercice, j'explique la logique du programme, ma contribution personnelle, les difficultés rencontrées, et l'état d'avancement.

1. Recherche séquentielle dans un tableauObjectif : Trouver l'indice d'un élément donné dans un tableau, ou indiquer qu'il n'est pas présent.
Logique :  Le programme lit la taille du tableau, ses éléments, et l'élément à rechercher (x).  
La fonction rechercheSequentielle parcourt le tableau linéairement, comparant chaque élément avec x.  
Si une correspondance est trouvée, la fonction retourne l'indice ; sinon, elle retourne -1.  
Le résultat est affiché avec un message indiquant si l'élément a été trouvé et à quel indice.
Contribution personnelle : J'ai conçu et implémenté la fonction rechercheSequentielle en utilisant une boucle simple pour parcourir le tableau. J'ai également écrit le code principal pour gérer les entrées utilisateur et tester la fonction avec différents cas (élément présent, absent, tableau vide).
Complexité : O(n), où n est la taille du tableau.
Difficultés rencontrées :  
J'ai initialement oublié de gérer le cas où le tableau est vide (n = 0), ce qui pouvait causer un comportement indéfini. J'ai ajouté une vérification pour retourner -1 si n ≤ 0.  
La gestion des entrées utilisateur (par exemple, des valeurs non valides) était un défi. J'ai testé plusieurs cas pour m'assurer que le programme reste robuste.
Avancement : Programme terminé, testé avec succès pour des tableaux de tailles variées et des cas où l'élément est absent.

2. Multiplication a × b en utilisant exclusivement +1Objectif : Calculer le produit de deux nombres positifs a et b en n'utilisant que l'opération d'incrémentation (+1).
Logique :  Le programme lit deux nombres a et b, et vérifie qu'ils sont positifs.  
La fonction multiplication utilise deux boucles imbriquées :  La boucle externe répète b fois.  
La boucle interne ajoute 1 à une variable result a fois pour chaque itération externe.
Le résultat équivaut à a × b.
Contribution personnelle : J'ai implémenté la fonction multiplication en respectant strictement la contrainte d'utiliser uniquement +1. J'ai ajouté une vérification pour garantir que a et b sont positifs, et j'ai testé le programme avec des petites et grandes valeurs.
Complexité : O(a × b), ce qui rend l'algorithme peu efficace pour de grandes valeurs.
Difficultés rencontrées :  
La principale difficulté était la lenteur de l'algorithme pour des valeurs élevées de a et b (par exemple, 100 × 100), car la double boucle effectue un grand nombre d'itérations. J'ai envisagé une optimisation, mais la contrainte d'utiliser uniquement +1 limitait les possibilités.  
J'ai rencontré un problème avec des valeurs négatives ou nulles saisies par erreur. J'ai résolu cela en ajoutant une vérification explicite au début du programme.
Avancement : Programme terminé et fonctionnel, mais lent pour de grandes entrées.

Conclusion

J'ai implémenté et testé avec succès les deux exercices assignés, en respectant les consignes. La recherche séquentielle a été relativement simple à concevoir, mais la multiplication a × b a posé des défis en termes de performance et de gestion des entrées. Ce travail m'a permis de mieux comprendre la programmation en C, en particulier la manipulation des boucles et la gestion des contraintes algorithmiques. Pour l'avenir, je pourrais explorer des optimisations pour la multiplication (si les contraintes le permettent) et renforcer la robustesse des entrées utilisateur.