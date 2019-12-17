#ifndef DEF_ACCOUNT_H_
#define DEF_ACCOUNT_H_

#include <iostream>
#include <string>

class compte
{
public:
	void deposer();
	void retirer();
	float Adecouvert();
	//void FaireVirement();

	void setSolde(float p_solde);
	float getSolde(float p_solde);

	void setTitulaire(std::string p_titulaire);
	std::string getTitulaire(std::string p_titulaire);

	compte();


protected:
	float solde;
	std::string titulaire;

	
};

#endif