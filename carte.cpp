#include "carte.h"
using namespace  std;
Carte::Carte(string question,string reponse,int difficulte):question(question),reponse(reponse),difficulte(difficulte)
{
    this->dateDernierRevison=0;
}
Carte::Carte(){}
void Carte::setQuestion(string question){this->question=question;}
void Carte::setReponse(string rep){this->reponse=rep;}
void Carte::setDifficulte(int diff){this->difficulte=diff;}
void Carte::reviser(int difficulte, time_t t)
{
    this->setDifficulte(difficulte);
    this->dateDernierRevison=t;
}
ostream & operator <<(ostream &os,const Carte & c)
{
    os<<"Question :"<<c.question <<endl;
    os<<"Reponse :"<<c.reponse;
    return os;
}
