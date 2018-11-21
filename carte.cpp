#include "carte.h"
using namespace  std;
Carte::Carte(string question,string reponse,int difficulte):question(question),reponse(reponse),difficulte(difficulte)
{
}
void Carte::setQuestion(string question){this->question=question;}
void Carte::setReponse(string rep){this->reponse=rep;}
void Carte::setDifficulte(int diff){this->difficulte=diff;}
