//D�claration des biblioth�que
#include <iostream>
#include <iomanip>
//Introduction du ficher d'en t�te .h
#include "carre.h"

//Introduction d'une focntion qui va nous permettre de nous passer de std
using namespace std;

//D�claration de la fonction pour les abscisse
void CCarre::setsx(int sx1)
{
	//Affiliation de la varible priv� par la variable d'entr�e de la fonction 
	sx = sx1;
}

//D�claration de la fonction pour les ordonnes
void CCarre::setsy(int sy1)
{
	//Affiliation de la varible priv� par la variable d'entr�e de la fonction
	sy = sy1;
}

//D�claration de la fonction pour le c�t� droit du carr�
void CCarre::setcote(int cote1)
{
	//Affiliation de la varible priv� par la variable d'entr�e de la fonction
	cote = cote1;
}

//D�claration de la fonction pour afficher le r�sultat
void CCarre::affichage()
{
	//Utilisation de la fonction cout afin de pouvoir afficher les r�sultats
	cout << "les coordonees de son sommet superieur gauche sont : " << sx << " et " << sy << endl;
	cout << "son cote droit est de : " << cote << endl;
}

//D�claration d'un fonction qui va retourner la valeur des abscisses
int CCarre::Getsx()
{
	//Return : fonction qui va retourner une valeur 
	return sx;
}

//D�claration d'un fonction qui va retourner la valeur des ordonn�es
int CCarre::Getsy()
{
	//Return : fonction qui va retourner une valeur 
	return sy;
}

//D�claration d'un fonction qui va retourner la valeur du c�t� droit du carr�
int CCarre::GetCote()
{
	//Return : fonction qui va retourner une valeur 
	return cote;
}

void CCarre::Deplacer(char direction, int saut)
{
	switch (direction)
	{
	case 'n':
		sy = sy - saut;
		break;
	case 's':
		sy = sy + saut;
		break;
	case 'e':
		sx = sx + saut;
		break;
	case 'o':
		sx = sx - saut;
		break;
	default:
		cout << "saisi invalide" << endl;
	}
	/*if (direction == 'n')
	{
		sy = sy - saut;
	}
	else if (direction=='s')
	{
		sy = sy + saut;
	}
	else if ()
	{

	}*/
}
