#ifndef CARTE_H
#define CARTE_H
#include<iostream>
class Carte
{
private:
    std::string question;
    std::string reponse;
    int difficulte;
public:
    Carte(std::string,std::string,int diff=1);
    void setQuestion(std::string);
    void setReponse(std::string);
    void setDifficulte(int);
    int getDifficulte();
    inline std::string getReponse(){return this->reponse;}
    inline std::string getQuestion(){return this->question;}

};

#endif // CARTE_H
