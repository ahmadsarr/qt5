#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H
#include"utilisateur.h"
class Administrateur:public Utilisateur
{
public:
    Administrateur(std::string pseudo,std::string mdp);
private:
};

#endif // ADMINISTRATEUR_H
