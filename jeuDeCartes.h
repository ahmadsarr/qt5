#ifndef JEUDECARTES_H
#define JEUDECARTES_H
#include<vector>
#include "carte.h"
class JeuDeCartes
{
private:
    std::vector<Carte> lesCartes;
    std::string nom;

public:
    JeuDeCartes(std::string name);
    std::string getNom()const{return this->nom;}
    int getNombreCarte();
    void ajouterCarte(Carte const &);
     Carte getCarte(int i) ;
    Carte getCarte(std::string const &);
    inline  std::vector<Carte>getCartes(){return this->lesCartes; }
};

#endif // JEUDECARTES_H
