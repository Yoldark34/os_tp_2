
#include "video.h"

void Affiche_Alien_1() {
	printfcolor("       .-''''-.", BLEU);
	printfcolor("      /        \\", BLEU);
	printfcolor("     /_        _\\", BLEU);
	printfcolor("    // \\      / \\\\", BLEU);
	printfcolor("    |\\__\\    /__/|", BLEU);
	printfcolor("     \\    ||    /", BLEU);
	printfcolor("      \\        /", BLEU);
	printfcolor("       \\  __  /", BLEU);
	printfcolor("        '.__.'", BLEU);
	printfcolor("         |  |", BLEU);
}

void Affiche_Alien_2() {
	printfcolor("       .-''''-.", BLEU);
	printfcolor("      /  _____ \\", BLEU);
	printfcolor("     /_   ___  _\\", BLEU);
	printfcolor("    // \\      / \\\\", BLEU);
	printfcolor("    |\\_0\\    /_0/|", BLEU);
	printfcolor("     \\    ||    /", BLEU);
	printfcolor("      \\   __   /", BLEU);
	printfcolor("       \\ |__| /", BLEU);
	printfcolor("        '.__.'", BLEU);
	printfcolor("         |  |", BLEU);
}

void copyright() {
	printfcolor("Ceci est un os GPL v.2", ROUGE);
}

void OS_Start() {
	Efface_Ecran();
	printfme("test");
	printfme("je suis un bouleyt");
	Affiche_Chaine_XY(0, 0, "blah");
	Affiche_Chaine_XY_Couleur(0, 1, "rabiougra", BLEU);
	Efface_Ecran();
	while (1) {

		int i = 0;
		int boucle = 5000;

		for (i = 0; i < boucle; i++) {
			copyright();
			Affiche_Alien_1();
			reset_Cursor();
		}


		for (i = 0; i < boucle; i++) {
			copyright();
			Affiche_Alien_2();
			reset_Cursor();

		}

	}
}
