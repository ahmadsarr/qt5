#include "GestionnaireAnki.h"
#include"carte.h"
#include<iostream>
#include<string>
#include<exception>
#include<ctime>
using namespace std;
GestionnaireAnki::GestionnaireAnki()
{
    //ctor

}
GestionnaireAnki::~GestionnaireAnki()
{
    //dtor
}
void GestionnaireAnki::ajouterJeudeCartes(string nom)
{
    lesJeuxDeCartes.push_back(nom);
}
bool GestionnaireAnki::supprimerJeuDeCartes(string nom)
{
    unsigned int i=0;
    for(i=0;i<lesJeuxDeCartes.size();i++)
    {
        if(lesJeuxDeCartes[i].getNom().compare(nom)==0)
            break;
    }
        try{
            lesJeuxDeCartes[i];
       // lesJeuxDeCartes.erase(lesJeuxDeCartes.begin());
        }catch(exception const& exce)
        {
            std::cout<<exce.what();
            return false;

        }
        return true;
}
void GestionnaireAnki::changerDegreCarte(Carte c,int d)
{
    c.setDifficulte(d);
}
JeuDeCartes * GestionnaireAnki::identifierJeuDeCarte(string nom)
{
    for(unsigned int i=0;i<lesJeuxDeCartes.size();i++)
    {
        if(lesJeuxDeCartes[i].getNom().compare(nom))
            return &lesJeuxDeCartes[i];
    }
    return 0;
}

int GestionnaireAnki::reviserJeuDeCartes(JeuDeCartes  &j)
{

    time_t current=0;
    gmtime(&current);
     double tmp=difftime(current,j.getCarte(0).getDernierDateRevison());
    int i;
  for(i=0;i<j.getCartes().size();i++)
  {
      time_t t=j.getCarte(i).getDernierDateRevison();
      if(t==0)
      {
       break;
      }
     double diff=difftime(current,j.getCarte(i).getDernierDateRevison());

  }
  return i;

}
