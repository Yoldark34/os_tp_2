/* 
 * File:   Ecran.h
 * Author: Yohan Sanchez (yohan.sanchez34@gmail.com)
 *
 * Created on 18 mars 2013, 15:30
 */

#ifndef VIDEO_H
#define	VIDEO_H

#include "type.h"
//------------------------------------------------------------------------------
#define BLEU		0x01
#define FOND_BLEU	0x10
#define VERT		0x02
#define FOND_VERT	0x24
#define ROUGE		0x04
#define FOND_ROUGE	0x40
#define LUMINEUX	0x08
#define CLIGONTANT	0x80
#define BLANC		ROUGE | VERT | BLEU
//------------------------------------------------------------------------------

#pragma pack(1)

typedef struct {
	UCHAR Caractere;
	BYTE Attribut;
} T_CARACTERE_ECRAN;
#pragma pack()


#endif	/* VIDEO_H */

