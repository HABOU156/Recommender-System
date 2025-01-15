//
// Created by Hanane boujja on 2025-01-15.
//
#include "recommandation.h"
#include <iostream>

int main() {
    SystemeRecommandation systeme;

    // Ajouter quelques exercices
    systeme.ajouterExercice({
        "Boucles For",
        "Programmation",
        1,
        {"boucles", "algorithmes"}
    });

    systeme.ajouterExercice({
        "Structures de données avancées",
        "Algorithmes",
        4,
        {"structures de données", "algorithmes"}
    });

    // Obtenir des recommandations
    std::vector<std::string> interets = {"Programmation", "algorithmes"};
    auto recommendations = systeme.recommander(2, interets);

    // Afficher les recommandations
    for (const auto& exercice : recommendations) {
        std::cout << "Titre: " << exercice.titre << "\n"
                  << "Niveau: " << exercice.niveau << "\n"
                  << "Sujet: " << exercice.sujet << "\n\n";
    }

    return 0;
}