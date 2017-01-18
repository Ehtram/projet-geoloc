#ifndef   _PARCOURS_LIST_H
#define   _PARCOURS_LIST_H

// Structure de gesion de la liste
typedef struct PARCOURS{
	/*! Structure d'un point */
	dataPoint *  pt;
	/*! Pointeur vers la chaine suivante de la liste */
	struct PARCOURS * next;
	/*! La taille de la liste */
    int size;
}parcours;

extern parcours* readData(FILE * p);

// Initialise une liste vide
extern parcours* initParcours();

// Ajoute un point en queue de liste
extern void addPoint(dataPoint * pt, parcours * p);

//Affichage de la liste
extern void displayList(parcours * p);

extern void destroyList(parcours * l);

#endif