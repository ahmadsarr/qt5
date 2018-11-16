#include "utilisateur.h"
using namespace  std;
Utilisateur::Utilisateur(string pseudo,string mdp):pseudo(pseudo),mdp(mdp)
{

}
string Utilisateur::getPseudo(){return this->pseudo;}
string Utilisateur::getMDP(){return this->mdp;}
void Utilisateur::setPseudo(string pseudo){this->pseudo=pseudo;}
void Utilisateur::setMDP(string mdp){this->mdp=mdp;}
