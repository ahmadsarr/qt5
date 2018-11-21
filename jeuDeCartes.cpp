#include "jeuDeCartes.h"
#include<strings.h>
using namespace std;
JeuDeCartes::JeuDeCartes(string name):nom(name)
{
    //ctor
}

void JeuDeCartes::ajouterCarte(Carte const & c)
{
    this->lesCartes.push_back(c);
}
Carte JeuDeCartes::getCarte(string const &question)
{
    for(int i=0;i<lesCartes.size();i++)
    {
        Carte carte=lesCartes[i];
        if(carte.getQuestion()==question)
        {
        return carte;
        }
    }
}
