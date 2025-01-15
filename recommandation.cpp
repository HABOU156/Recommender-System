//
// Created by Hanane boujja on 2025-01-15.
//

#include "recommandation.h"
#include <algorithm>

void SystemeRecommandation::ajouterExercice(const Exercice& exercice) {
    exercices.push_back(exercice);
}

double SystemeRecommandation::calculerScore(const Exercice& exercice,
                                          int niveauUtilisateur,
                                          const std::vector<std::string>& interets) {
    double score = 0.0;

    // Score basé sur le niveau
    score += 1.0 - std::abs(exercice.niveau - niveauUtilisateur) / 5.0;

    // Score basé sur les intérêts
    for (const auto& interet : interets) {
        if (exercice.sujet == interet) {
            score += 1.0;
        }
        for (const auto& competence : exercice.competences) {
            if (competence == interet) {
                score += 0.5;
            }
        }
    }

    return score;
}

std::vector<Exercice> SystemeRecommandation::recommander(
    int niveauUtilisateur,
    const std::vector<std::string>& interets) {

    std::vector<std::pair<double, Exercice>> exercicesScores;

    for (const auto& exercice : exercices) {
        double score = calculerScore(exercice, niveauUtilisateur, interets);
        exercicesScores.push_back({score, exercice});
    }

    // Trier par score décroissant
    std::sort(exercicesScores.begin(), exercicesScores.end(),
              [](const auto& a, const auto& b) {
                  return a.first > b.first;
              });

    // Retourner les 5 meilleurs exercices
    std::vector<Exercice> recommendations;
    for (size_t i = 0; i < std::min(size_t(5), exercicesScores.size()); ++i) {
        recommendations.push_back(exercicesScores[i].second);
    }

    return recommendations;
}