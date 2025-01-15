//
// Created by Hanane boujja on 2025-01-15.
//

#ifndef RECOMMANDATION_H
#define RECOMMANDATION_H



#include <string>
#include <vector>
#include <map>

struct Exercice {
    std::string titre;
    std::string sujet;
    int niveau;  // 1-5
    std::vector<std::string> competences;
};

class SystemeRecommandation {
private:
    std::vector<Exercice> exercices;
    std::map<std::string, double> profilUtilisateur;

public:
    void ajouterExercice(const Exercice& exercice);
    std::vector<Exercice> recommander(int niveauUtilisateur,
                                    const std::vector<std::string>& interets);
    double calculerScore(const Exercice& exercice,
                        int niveauUtilisateur,
                        const std::vector<std::string>& interets);
};

#endif //RECOMMANDATION_H
