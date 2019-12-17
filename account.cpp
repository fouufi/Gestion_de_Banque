#include "account.h"

#include <iostream>
#include <string>
#include <locale>

using namespace std;

compte::compte()
//Constructeur
{
	solde = -50;
	titulaire = "Fanny";
}

void compte::setSolde(float p_solde)
{
	solde = p_solde;

}

float compte::getSolde(float p_solde)
{
	return (float)solde;
}

void compte::setTitulaire(string p_titulaire)
{
	titulaire = p_titulaire;
}

string compte::getTitulaire(string p_titulaire)
{
	return string(titulaire);
}

float compte::Adecouvert()
//Savoir si le compte est à découvert
{
	if (solde < 0)
	{
		cout << "Vous êtes à découvert" << endl;
	}
	else
		cout << "Vous n'êtes pas à découvert" << endl;

	return solde;
}


void compte::deposer()
//Deposer de l'argent sur le compte
{
	locale::global(locale(""));

	cout << "Combien voulez-vous déposer ?" << endl;
	float ajout;
	cin >> ajout;

	float NewSolde = ajout + solde;

	cout << "Vous venez d'ajouter : " << ajout << "euros sur votre compte." << endl;

	cout << "Vous avez désormais : " << NewSolde << "euros sur votre compte." << endl;
	solde = NewSolde;
}

void compte::retirer()
//Retirer de l'argent sur le compte
{

	if (Adecouvert() <= 0)
	{
		cout << "Vous êtes à découvert, vous ne pouvez pas retirer d'argent" << endl;
		return;
	}

	cout << "Combien voulez-vous retirer ?" << endl;
	float retrait;
	cin >> retrait;

	if (solde - retrait < 0)
	{
		cout << "Erreur, pas assez d'argent " << endl;
		return;
	}

	float NewSolde = solde - retrait;

	cout << "Vous venez de retirer : " << retrait << "euros sur votre compte." << endl;

	cout << "Il vous reste : " << NewSolde << "euros sur votre compte." << endl;

	solde = NewSolde;
}


/*void compte::FaireVirement(float solde, std::string titulaire, float solde2, std::string titulaire2)
{

}
*/