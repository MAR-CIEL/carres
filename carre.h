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

	//D�claration d'un fonction qui va retourner sx
	int Getsx();

	//D�claration d'un fonction qui va retourner sy
	int Getsy();

	//D�claration d'un fonction qui va retourner cote
	int GetCote();

	// "D�place" le carr� sans le dessiner. Les attributs x et y  
	// sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de  
	// la direction : par ex direction nord saut=2 y=y-2 
	// Entr�es : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
	//   - saut : nombre de pixels de d�placement du carr� 
	// Sortie : Aucune 
	void Deplacer(char direction, int saut);
};