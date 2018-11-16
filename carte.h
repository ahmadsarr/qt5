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
    Carte(std::string,std::string,int);
    void setQuestion(std::string);
    void setReponse(std::string);
    void setDifficulte(int);
    int getDifficulte();
    std::string getReponse();
    std::string getQuestion();

};

#endif // CARTE_H
