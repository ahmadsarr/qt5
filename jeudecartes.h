#ifndef JEUDECARTES_H
#define JEUDECARTES_H
#include<vector>
#include "carte.h"
class JeuDeCartes
{
private:
    vector<Carte> lesCartes;
public:
    JeuDeCartes();
    void ajouterCarte(Carte);
    Carte getCarte();
};

#endif // JEUDECARTES_H
