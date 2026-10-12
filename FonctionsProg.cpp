#include <iostream>
#include <iomanip>
#include <>
using namespace std;
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
		std::cin >> recommencer;

	} while (toupper(recommencer) == 'O');

	std::cout << "\nMerci d'avoir utilise le programme. Au revoir !" << endl;

	return;
}

void calucl_de_caisse() 
{
    const double PIECE_2E = 2.0;
    const double PIECE_1E = 1.0;
    const double PIECE_50C = 0.50;
    const double PIECE_20C = 0.20;
    const double PIECE_10C = 0.10;
    const double PIECE_5C = 0.05;
    const double PIECE_2C = 0.02;
    const double PIECE_1C = 0.01;

    int qte_2e, qte_1e, qte_50c, qte_20c, qte_10c, qte_5c, qte_2c, qte_1c;
    double montant_total = 0.0;

    std::cout << "=== PROGRAMME DE CALCUL DE CAISSE ===" << endl;
    std::cout << "Veuillez saisir le nombre de pieces pour chaque valeur." << endl << endl;

    std::cout << "saisie du nombre de pièces de 2€";
    std::cin >> qte_2e;

    std::cout << "saisie du nombre de pièce de 1€";
    std::cin >> qte_1e;

    std::cout << " saisie du nombre de piece de 50 centime";
    std::cin >> qte_50c;

    std::cout << " saisie du nombre de pièce de 20 centime";
    std::cin >> qte_20c;

    std::cout << "saisie du nombre de piece de 10 centime";
    std::cin >> qte_10c;

    std::cout << "saisie du nombre de pièce de 5 centime";
    std::cin >> qte_5c;

    std::cout << "saisie du nombre de pièce de 2 centime";
    std::cin >> qte_2c;

    std::cout << "saisie du nombre de pièce de 1 centime";
    std::cin >> qte_1c;


    montant_total = (qte_2e * PIECE_2E) + (qte_1e * PIECE_1E) + (qte_50c * PIECE_50C) + (qte_20c * PIECE_20C) + (qte_10c * PIECE_10C) + (qte_5c * PIECE_5C) + (qte_2c * PIECE_2C) + (qte_1c * PIECE_1C);

    cout << fixed << setprecision(2);

    cout << "\n------------------------------------" << endl;
    cout << "Le montant total de votre caisse est : " << montant_total << " Euros" << endl;
    cout << "------------------------------------" << endl;

    return 0;
}

void affichage_d_un_caratere_De_son_code_ASCII()
{

        char caractere;

        cout << "=== CONVERTISSEUR ASCII (DECIMAL & HEXADECIMAL) ===" << endl;
        cout << "Ce programme vous donne les codes ASCII d'un caractere.\n" << endl;


        cout << "Veuillez saisir un caractere au clavier : ";
        cin >> caractere;

        cout << "\n--- Resultats pour le caractere '" << caractere << "' ---" << endl;

        // Pour obtenir le Décimal :
        // On écrit (int)caractere pour forcer C++ à afficher le NOMBRE caché derrière le caractère.
        cout << "Code Decimal     : " << (int)caractere << endl;

        // Pour obtenir l'Hexadécimal :
        // On écrit 'hex' avant, ce qui bascule l'affichage en mode hexadécimal pour toute la ligne.
        cout << "Code Hexadecimal : " << hex << (int)caractere << endl;

        return EXIT_SUCCESS;

}

void tables_des_odes_ASCII() 
{
    cout << "=== TABLE DES CODES ASCII (DE 32 A 127) ===" << endl << endl;
    // 2. AFFICHAGE DE L'EN-TETE DU TABLEAU (pour faire propre et aligne)
    cout << "Caractere \t Decimal \t Hexadecimal" << endl;
    cout << "---------------------------------------------" << endl;

    // 3. LA BOUCLE DE PARCOURS
    // On commence l'entier 'code' à 32, et la boucle continue TANT QUE 'code' est inférieur ou égal à 127.
    // À chaque fin de tour, 'code++' ajoute 1 au nombre.
    for (int code = 32; code <= 127; code++) {

        // On convertit le nombre en caractère avec (char)
        char caractere_visuel = (char)code;

        // Le symbole '\t' est une "tabulation" : cela sert à créer des colonnes bien alignées à l'écran.
        cout << "   " << caractere_visuel << " \t\t   " << code << " \t\t   " << hex << code << endl;

        // décimal= 'dec'.
        cout << dec;
    }
    cout << "---------------------------------------------" << endl;
    cout << "Fin de la table ASCII." << endl;

    return 0;
}

void Taille_des_variables()
{
    cout << "=== TAILLE DES TYPES DE VARIABLES EN C++ ===" << endl;
    cout << "Affichage de la taille en octets sur cette machine :\n" << endl;

    // sizeof(char) va renvoyer la taille d'un caractère, etc.
    cout << "Taille d'un 'char'   : " << sizeof(char) << " octet(s)" << endl;
    cout << "Taille d'un 'bool'   : " << sizeof(bool) << " octet(s)" << endl;
    cout << "Taille d'un 'int'    : " << sizeof(int) << " octet(s)" << endl;
    cout << "Taille d'un 'float'  : " << sizeof(float) << " octet(s)" << endl;
    cout << "Taille d'un 'double' : " << sizeof(double) << " octet(s)" << endl;

    cout << "\n--------------------------------------------" << endl;
    cout << "Fin du programme." << endl;

    return 0;
}

void jeu_de_devinette() 
{
    // Initialisation du générateur de hasard pour ne pas avoir toujours la même partie
    srand(time(0));


    int valeur_max;
    int nombre_secret;
    int proposition = 0; // Initialisé à 0 pour entrer dans la boucle

    cout << "=== JEU DE DEVINETTE ===" << endl;
    cout << "Devinez le nombre secret choisi par l'ordinateur.\n" << endl;

    //  Saisie de la borne maximale par le joueur
    cout << "Choisissez la valeur entiere maximale : ";
    cin >> valeur_max;

    // Génération du nombre secret entre 1 et valeur_max
    nombre_secret = (rand() % valeur_max) + 1;

    cout << "\nLe nombre secret a ete genere entre 1 et " << valeur_max << "." << endl;
    cout << "A vous de jouer !" << endl;

    // Tant que le joueur n'a pas trouvé le bon nombre, on continue
    while (proposition != nombre_secret) {

        cout << "\nEntrez votre proposition : ";
        cin >> proposition;

        // Comparaisons pour guider le joueur
        if (proposition > nombre_secret) {
            cout << "C'est plus petit !" << endl;
        }
        else if (proposition < nombre_secret) {
            cout << "C'est plus grand !" << endl;
        }
        else {
            cout << "Bravo, vous avez trouve le nombre secret !" << endl;
        }
    }

    return 0;
}

void Triangle_d_etoiles() 
{
    // Déclaration de la variable taille (entier)
    int taille;

    // Demander et enregistrer la taille du triangle souhaitée par l'utilisateur
    std::cout << "Entrez la taille du triangle : ";
    std::cin >> taille;

    // Déclaration d'un tableau de chaînes de caractères (tableau de tableaux de char) de taille maximale
    // Nous utilisons un vecteur de chaînes dynamiques pour s'adapter à la taille choisie
    std::vector<std::string> tableau(taille);

    // Déclaration d'une chaîne tampon temporaire vide
    std::string tampon = "";

    // BOUCLE PRINCIPALE : Pour chaque ligne 'i' allant de 0 jusqu'à 'taille - 1'
    for (int i = 0; i < taille; ++i) {
        // Ajouter une étoile "*" à la fin de la chaîne tampon
        tampon += "*";

        // Copier le contenu du tampon dans la case 'i' du tableau (mémorisation)
        tableau[i] = tampon;

        // Afficher la chaîne de caractères stockée dans la case 'i' du tableau
        std::cout << tableau[i] << std::endl;
    } // Fin de la boucle principale

    return 0;
}