# Recommender-System
# Système de Recommandation d'Exercices

Ce projet implémente un système de recommandation d'exercices éducatifs en C++. Il permet de suggérer des exercices aux utilisateurs en fonction de leur niveau et de leurs centres d'intérêt.

## Fonctionnalités

- Recommandation d'exercices basée sur :
  - Le niveau de l'utilisateur (1-5)
  - Les centres d'intérêt de l'utilisateur
  - Les compétences associées aux exercices
- Système de scoring intelligent pour classer les exercices
- Retourne les 5 meilleures recommandations

## Structure du Projet

- `recommandation.hpp` : Définitions des classes et structures
- `recommandation.cpp` : Implémentation de la logique de recommandation
- `main.cpp` : Programme de démonstration

## Compilation

Pour compiler le projet, utilisez la commande suivante :
      ```bash
      g++ -std=c++11 main.cpp recommandation.cpp -o recommandation

## Utilisation

Voici un exemple d'utilisation du système de recommandation en C++.
     ```cpp
  // Importer la classe du système de recommandation
  #include "SystemeRecommandation.h"
  
  int main() {
      // Créer une instance du système
      SystemeRecommandation systeme;
  
      // Ajouter des exercices au système
      systeme.ajouterExercice({
          "Titre de l'exercice",   // Le titre de l'exercice
          "Sujet",                // Le sujet de l'exercice
          3,                      // Niveau de difficulté (1-5)
          {"competence1", "competence2"} // Compétences associées
      });
  
      // Définir les intérêts de l'utilisateur
      std::vector<std::string> interets = {"Sujet1", "Sujet2"};
  
      // Obtenir des recommandations d'exercices
      int niveauUtilisateur = 3; // Exemple : Niveau de l'utilisateur
      auto recommendations = systeme.recommander(niveauUtilisateur, interets);
  
      // Afficher les recommandations
      for (const auto& exercice : recommendations) {
          std::cout << exercice << std::endl;
      }
  
      return 0;
  }

  
## Exemple de Sortie
Titre: Boucles For
Niveau: 1
Sujet: Programmation
Titre: Structures de données avancées
Niveau: 4
Sujet: Algorithmes


## Améliorations Possibles

- Ajout d'un système de feedback utilisateur
- Implémentation d'un algorithme de filtrage collaboratif
- Persistance des données
- Interface utilisateur graphique
- Support pour plus de critères de recommandation

  




