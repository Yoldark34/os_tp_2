#include "Video.h"

#define ADRESSE_BASE_VIDEO	0xB8000
#define NOMBRE_COLONNES		80
#define NOMBRE_LIGNES		25
#define NOMBRE_ELEMENTS		NOMBRE_COLONNES*NOMBRE_LIGNES
//-----------
// Variables globales Externes
//----------
//BYTE* Video = (BYTE*)ADRESSE_BASE_VIDEO;
T_CARACTERE_ECRAN* Map_Video = (T_CARACTERE_ECRAN*) ADRESSE_BASE_VIDEO;

//==============================================================================

void Efface_Ecran() {
	UINT16 L_Index;
	for (L_Index = 0; L_Index < NOMBRE_ELEMENTS; L_Index++) {
		Map_Video[L_Index].Attribut = BLANC;
		Map_Video[L_Index].Caractere = ' ';
	}
}
//------------------------------------------------------------------------------

void Affiche_Chaine_XY_Couleur(BYTE P_X, BYTE P_Y, char* P_Chaine, BYTE P_Attribut) {
	UINT16 L_Offset = (P_Y * NOMBRE_COLONNES) + P_X;
	while (*P_Chaine) {
		Map_Video[L_Offset].Attribut = P_Attribut;
		Map_Video[L_Offset].Caractere = *P_Chaine;
		P_Chaine++;
		L_Offset++;
	}
}

//------------------------------------------------------------------------------

void Affiche_Chaine_XY(BYTE P_X, BYTE P_Y, char* P_Chaine) {
	Affiche_Chaine_XY_Couleur(P_X, P_Y, P_Chaine, BLANC);
}