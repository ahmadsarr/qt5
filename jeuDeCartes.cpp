#include "jeuDeCartes.h"
#include<strings.h>
#include"carte.h"
using namespace std;
JeuDeCartes::JeuDeCartes(string name):nom(name)
{
    //ctor
}

void JeuDeCartes::ajouterCarte(Carte const & c)
{
    this->lesCartes.push_back(c);
}

int JeuDeCartes::getNombreCarte()
{
    return lesCartes.size();
}
Carte JeuDeCartes::getCarte(int nocarte)
{
    return lesCartes[nocarte];
}
