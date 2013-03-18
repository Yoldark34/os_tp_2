
#include "video.h"

void Affiche_Alien_1(BYTE color) {
	BYTE prevColor = getColor();
	setColor(color);
	printfcolor("       .-''''-.");
	printfcolor("      /        \\");
	printfcolor("     /_        _\\");
	printfcolor("    // \\      / \\\\");
	printfcolor("    |\\__\\    /__/|");
	printfcolor("     \\    ||    /");
	printfcolor("      \\        /");
	printfcolor("       \\  __  /");
	printfcolor("        '.__.'");
	printfcolor("         |  |");
	setColor(prevColor);
}

void Affiche_Alien_2(BYTE color) {
	BYTE prevColor = getColor();
	setColor(color);
	printfcolor("       .-''''-.");
	printfcolor("      /  _____ \\");
	printfcolor("     /_   ___  _\\");
	printfcolor("    // \\      / \\\\");
	printfcolor("    |\\_0\\    /_0/|");
	printfcolor("     \\    ||    /");
	printfcolor("      \\   __   /");
	printfcolor("       \\ |__| /");
	printfcolor("        '.__.'");
	printfcolor("         |  |");
	setColor(prevColor);
}

void copyright() {
	BYTE prevColor = getColor();
	setColor(ROUGE);
	printfcolor("Ceci est un os GPL v.2");
	setColor(prevColor);
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
			Affiche_Alien_1(VERT);
			reset_Cursor();
		}


		for (i = 0; i < boucle; i++) {
			copyright();
			Affiche_Alien_2(VERT);
			reset_Cursor();

		}

	}
}
