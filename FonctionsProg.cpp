#include <iostream>



void Estimation_du_cout_d_un_abonnement_telephonique() 
{
	char recommencer = 0;

	do {
		int minutes = 0, sms = 0;
		double cout_A, cout_B = 0.0;

		std::cout << "\n=== Estimation de votre consommation mensuelle ===" << endl;

		std::cout << "durée des appels en minutes : ";
		std::cin >> minutes;

		std::cout << "nombres d'sms envoyé par mois :";
		std::cin >> sms;

		cout_A = 2 + (10 * 0.3) + (10 * 0.1);
		cout_B = 4 + (12 * 0.2) + (12 * 0.088);

		std::cout << fixed << setprecision(2);

		std::cout << "Cout du forfait A : " << cout_A << " €" << endl;
		std::cout << "Cout forfait B : " << cout_B << " €" << endl;


		std::cout << "\nVoulez-vous recommencer (O/N) ? ";
		cin >> recommencer;

	} while (toupper(recommencer) == 'O');

	cout << "\nMerci d'avoir utilise le programme. Au revoir !" << endl;

	return
}

void calucl_de_caisse() 
{

}

void affichage_d_un_caratere_De_son_code_ASCII()
{

}

void tables_des_odes_ASCII() 
{

}

void Taille_des_variables()
{

}

void jeu_de_devinette() 
{

}

void Triangle_d_etoiles() 
{

}