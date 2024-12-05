//Déclaration des bibliothèque
//Introduction du ficher d'en tête .h
#include "carre.h"
#include <iomanip>
#include <iostream>

//Introduction d'une focntion qui va nous permettre de nous passer de std
using namespace std;

//Introduction de la fonction principal main
int main()
{
	//Déclaration d'une variable de type CCarre
	//CCarre est une class déclarer dans le fichier d'en tête .h
	CCarre c1;
	//Utilisation des fonction grace a la variable déclarer
	c1.setsx(3);
	c1.setsy(6);
	c1.setcote(9);
	c1.affichage();
}