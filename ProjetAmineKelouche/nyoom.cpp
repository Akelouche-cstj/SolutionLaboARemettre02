//But: Le programme doit calculer le montant qu'un individu devra débourser pour faire un voyage dans une automobile louée.
//Auteur: Amine K.
//Date 2020-09-17 Désolé c'est en retard :(



#include <iostream>  // Permet le input et l'output

int main()   // Commencement du programme
{
	setlocale(LC_ALL, "");	// Permet de voir les accents s'il y en a dans la console.

	// pour 250km la personne doit tout de même payer pour l'essence qu'il à brûler.
	// C'est comme ça que je l'ai compris.


	int km;     // déclaration des variables
	int location = 45;

	std::cout << "Entrer la distance que vous voulez parcourir en km : ";
	std::cin >> km;
	
	int litres = km * 7.6 / 100;
	int coutlitre = litres * 1.25;
	int kmsup = (km - 250) * 0.05;
	int prix = (location) + (kmsup) + (coutlitre);

	if (km < 0)
	{
		std::cout << "Vous ne pouvez pas parcourir " << km << " de distance.";
	}


	if (km >= 0 && km <= 250)
	{
		std::cout << "La location vous coute : " << location + coutlitre << " $";
	}
	else
	{
		if (km > 250)
		{
			std::cout << "Si vous parcourer " << km << " ça vous couteras donc: " << prix << " $";

		}
	}
	return 0;
}

/*tests    

250 km			68$

300 km			74$

-100 km			vous ne pouvez pas parcourir -100 km

1000km			177$

0				45$

*/

