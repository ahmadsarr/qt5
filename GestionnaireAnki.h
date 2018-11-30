#ifndef GESTIONNAIREANKI_H
#define GESTIONNAIREANKI_H
#include "jeuDeCartes.h"
/**
 * @brief The GestionnaireAnki class Le modele du projet
 */
class GestionnaireAnki
{
    public:
        GestionnaireAnki();
        virtual ~GestionnaireAnki();
        /**
         * @brief ajouter un nouveau paquet
         * @param nom
         */
        void ajouterJeudeCartes(std::string nom);
        /**
         * @brief supprimer un paquet
         * @return true|false
         */
        bool supprimerJeuDeCartes(std::string );
        int reviserJeuDeCartes(JeuDeCartes  &j);
        void changerDegreCarte(Carte c,int d);
        JeuDeCartes * identifierJeuDeCarte(std::string);
    protected:
        std::vector<JeuDeCartes>lesJeuxDeCartes;/*!
        enum Degre{FACILE,MOYEN,DIFFICULTE};

    private:
};

#endif // GESTIONNAIREANKI_H
