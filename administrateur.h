#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H
#include"utilisateur.h"
#include "jeuDeCartes.h"
/**
 * @brief The Administrateur class gerer les super utilisateurs
 */
class Administrateur:public Utilisateur
{
public:
    /**
     * @brief Administrateur gerer la connexion du super Utilisateur
     * @param pseudo nom d'utilisateur
     * @param mdp son mot de pass
     */
    Administrateur(std::string pseudo,std::string mdp);
private:

};

#endif // ADMINISTRATEUR_H
