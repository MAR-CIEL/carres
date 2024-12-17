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

	//Déclaration d'un fonction qui va retourner sx
	int Getsx();

	//Déclaration d'un fonction qui va retourner sy
	int Getsy();

	//Déclaration d'un fonction qui va retourner cote
	int GetCote();

	// "Déplace" le carré sans le dessiner. Les attributs x et y  
	// sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
	// la direction : par ex direction nord saut=2 y=y-2 
	// Entrées : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
	//   - saut : nombre de pixels de déplacement du carré 
	// Sortie : Aucune 
	void Deplacer(char direction, int saut);
};