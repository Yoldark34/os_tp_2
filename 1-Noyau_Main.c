
#include "video.h"

void Affiche_Alien_1() {
	Affiche_Chaine_XY_Couleur(0, 2, "       .-''''-.", BLEU);
	Affiche_Chaine_XY_Couleur(0, 3, "      /        \\", BLEU);
	Affiche_Chaine_XY_Couleur(0, 4, "     /_        _\\", BLEU);
	Affiche_Chaine_XY_Couleur(0, 5, "    // \\      / \\\\", BLEU);
	Affiche_Chaine_XY_Couleur(0, 6, "    |\\__\\    /__/|", BLEU);
	Affiche_Chaine_XY_Couleur(0, 7, "     \\    ||    /", BLEU);
	Affiche_Chaine_XY_Couleur(0, 8, "      \\        /", BLEU);
	Affiche_Chaine_XY_Couleur(0, 9, "       \\  __  /", BLEU);
	Affiche_Chaine_XY_Couleur(0, 10, "        '.__.'", BLEU);
	Affiche_Chaine_XY_Couleur(0, 11, "         |  |", BLEU);
}

void Affiche_Alien_2() {
	Affiche_Chaine_XY_Couleur(0, 2, "       .-''''-.", BLEU);
	Affiche_Chaine_XY_Couleur(0, 3, "      /        \\", BLEU);
	Affiche_Chaine_XY_Couleur(0, 4, "     /_        _\\", BLEU);
	Affiche_Chaine_XY_Couleur(0, 5, "    // \\      / \\\\", BLEU);
	Affiche_Chaine_XY_Couleur(0, 6, "    |\\_0\\    /_0/|", BLEU);
	Affiche_Chaine_XY_Couleur(0, 7, "     \\    ||    /", BLEU);
	Affiche_Chaine_XY_Couleur(0, 8, "      \\   __   /", BLEU);
	Affiche_Chaine_XY_Couleur(0, 9, "       \\ |__| /", BLEU);
	Affiche_Chaine_XY_Couleur(0, 10, "        '.__.'", BLEU);
	Affiche_Chaine_XY_Couleur(0, 11, "         |  |", BLEU);
}

void OS_Start() {
	Efface_Ecran();
	Affiche_Chaine_XY(0, 0, "blah");
	Affiche_Chaine_XY_Couleur(0, 1, "rabiougra", BLEU);
	//Affiche_Alien_1();
	Affiche_Alien_2();
}