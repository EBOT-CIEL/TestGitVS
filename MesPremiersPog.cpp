//Afficher le menu de votre choix dans la selection du programme 
//Affichage 1. Estimation du coût d’un abonnement téléphonique 
//Affichage 2. calcul de caisse
//Affichage 3. affichage d'un caractèreet de son code ASCII
//Affichage 4. Tables de codes ASCII
//Affichage 5. Taille des variables
//Affichage 6. jeu de devinette
//Affichage 7. Triangle d'étoiles
//Afficher " ecrire votre choix" 
//lire le choix
//executer le programme 

#include <iostream>
using namespace std;
int main()
{
	int choix = 0;
	cout << "================Afficher le menu de votre choix=============" << "\endl";
	cout << "Estimation du coût d’un abonnement téléphonique" << "\endl";
	cout << "calcul de caisse " << "\endl";
	cout << "affichage d'un caratère De son code ASCII" << "\endl";
	cout << "tables des codes ASCII" << "\endl";
	cout << "Taille des variables" << "\endl";
	cout << "jeu de devinette" << "\endl";
	cout << "Triangle d'étoiles" << "\endl";
	cout << "écrire votre" << "\endl";
	cout << "quitter votre programme" << "\endl";

	cout << "votre choix" << "\endl";
	cin >> choix;

	switch (choix) 

	case 1  << "vous avez choisi le programme 1" << endl;
		break;

	case 2 << "vous avez choisi le programme 2" << endl;
		break;

	case 3 << "vous avez choisi le programme 3" << endl;
		break;

	case 4 << "vous avez choisi le programme 4" << endl;
		break;
	
	case 5 << "vous avez choisi le programme 5" << endl;
		break;

	case 6 << "vous avez choisi le programme 6" << endl;
		break;

	case 7 << "vous avez choisi le programme 7" << endl;
		break;


return 0;
}