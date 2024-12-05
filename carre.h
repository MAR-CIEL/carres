#pragma once

//D�claration des biblioth�que
#include <iostream>
#include <iomanip>

//Introduction d'une focntion qui va nous permettre de nous passer de std
using namespace std;

//Utilisation des classe utile pour l'orient� objet
class CCarre
{
//D�claration des variable en priv� afin de ne pas pouvoir les modifier directement
private:
	//D�claration des variable 
	int sx, sy; 
	unsigned int cote;
//D�claration de tous ce qui sera public et donc accessible a l'utilisateur 
//notamment des fonction et autre 
public:
	//D�claration de la fonction pour les abscisse
	void setsx(int sx1);

	//D�claration de la fonction pour les ordonnes
	void setsy(int sy1);

	//D�claration de la fonction pour le c�t� droit du carr�
	void setcote(int cote1);

	//D�claration de la fonction pour afficher le r�sultat
	void affichage();
};