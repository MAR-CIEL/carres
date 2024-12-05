#pragma once

//Déclaration des bibliothèque
#include <iostream>
#include <iomanip>

//Introduction d'une focntion qui va nous permettre de nous passer de std
using namespace std;

//Utilisation des classe utile pour l'orienté objet
class CCarre
{
//Déclaration des variable en privé afin de ne pas pouvoir les modifier directement
private:
	//Déclaration des variable 
	int sx, sy; 
	unsigned int cote;
//Déclaration de tous ce qui sera public et donc accessible a l'utilisateur 
//notamment des fonction et autre 
public:
	//Déclaration de la fonction pour les abscisse
	void setsx(int sx1);

	//Déclaration de la fonction pour les ordonnes
	void setsy(int sy1);

	//Déclaration de la fonction pour le côté droit du carré
	void setcote(int cote1);

	//Déclaration de la fonction pour afficher le résultat
	void affichage();
};