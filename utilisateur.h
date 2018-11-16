#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include<iostream>

class Utilisateur
{
private:
    std::string pseudo;
    std::string mdp;

public:
    Utilisateur(std::string pseudo,std::string mdp);
    void setPseudo(std::string);
    void setMDP(std::string);
    std::string getPseudo();
    std::string getMDP();


};

#endif // UTILISATEUR_H
