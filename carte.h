#ifndef CARTE_H
#define CARTE_H
#include<iostream>
#include<ctime>
/**
  @file carte.h
 * @brief The Carte class represente une question et une reponse
 */
class Carte
{
private:
    /**
     * @brief question
     */
    std::string question;
    /**
     * @brief reponse
     */
    std::string reponse;
    /**
     * @brief difficulte represente le niveau de la question facile si on le sait [moyen] si on a du mal a se rappeler [difficile] si on se rappelle pas
     */
    int difficulte;
    /**
     * @brief dateDernierRevison
     */
    time_t dateDernierRevison;
public:
    Carte(std::string,std::string,int diff=1);
    Carte();
    /**
     * @brief setQuestion
     * @param String nouvelleQuestion
     */
    void setQuestion(std::string);
    /**
     * @brief setReponse
     * @param nouvelleReponse
     */
    void setReponse(std::string);
    /**
     * @brief setDifficulte
     * @param
     */
    void setDifficulte(int);
    /**
     * @brief getDifficulte
     * @return difficulte
     */
    int getDifficulte();
    /**
     * @brief getReponse
     * @return reponse
     */
    inline std::string getReponse(){return this->reponse;}
    /**
     * @brief getQuestion
     * @return question
     */
    inline std::string getQuestion(){return this->question;}
    /**
     * @brief reviser
     * @param difficulte
     * @param time date de la derniere revision
     */
    void reviser(int difficulte,time_t time);
    /**
     * @brief getDernierDateRevison
     * @return dateDernierRevison
     */
    time_t getDernierDateRevison(){return dateDernierRevison;}
    friend std::ostream & operator<<(std::ostream &,const Carte  &c);
};

#endif // CARTE_H
