//D�claration des biblioth�que
//Introduction du ficher d'en t�te .h
#include "carre.h"
#include <iomanip>
#include <iostream>

//Introduction d'une focntion qui va nous permettre de nous passer de std
using namespace std;

//Introduction de la fonction principal main
int main()
{
	//D�claration d'une variable de type CCarre
	//CCarre est une class d�clarer dans le fichier d'en t�te .h
	CCarre c1;
	//Utilisation des fonction grace a la variable d�clarer
	c1.setsx(3);
	c1.setsy(6);
	c1.setcote(9);
	c1.affichage();
}