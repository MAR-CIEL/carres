//Déclaration des bibliothèque
#include <iostream>
#include <iomanip>
//Introduction du ficher d'en tête .h
#include "carre.h"

//Introduction d'une focntion qui va nous permettre de nous passer de std
using namespace std;

//Déclaration de la fonction pour les abscisse
void CCarre::setsx(int sx1)
{
	//Affiliation de la varible privé par la variable d'entrée de la fonction 
	sx = sx1;
}

//Déclaration de la fonction pour les ordonnes
void CCarre::setsy(int sy1)
{
	//Affiliation de la varible privé par la variable d'entrée de la fonction
	sy = sy1;
}

//Déclaration de la fonction pour le côté droit du carré
void CCarre::setcote(int cote1)
{
	//Affiliation de la varible privé par la variable d'entrée de la fonction
	cote = cote1;
}

//Déclaration de la fonction pour afficher le résultat
void CCarre::affichage()
{
	//Utilisation de la fonction cout afin de pouvoir afficher les résultats
	cout << "les coordonees de son sommet superieur gauche sont : " << sx << " et " << sy << endl;
	cout << "son cote droit est de : " << cote << endl;
}
