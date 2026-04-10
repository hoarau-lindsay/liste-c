#pragma once
#include <stdlib.h>

/* API de la librairie 

Fonctions disponibles 

createLC : Création d'une liste chainée 
deleteLC : Supprimer de l'intégralité de la liste chainée 
sizeLC : taille de la liste
addLC : ajouter un élément dans la liste 
getLC : récupération d'une valeur par leur position 
replaceLC : remplacer une valeur par une autre
insertLC : insérer une valeur à une position et décaler le reste des éléments vers la droite 
removeLC : enlever un élément de la liste 
*/

char* versionLC();                 // Version de la liste chainé 

//struct st_listeC;                  // Création d'une structure 
//typedef struct st_listeC * ListeC; // Alias permettant de facilité l'appel 
typedef struct st_listeC{
    struct st_listeC * premier; 
} ListeC;

ListeC createLC(); // Création d'une liste chainée 
ListeC deleteLC(); // Supprimer de l'intégralité de la liste chainée 

int sizeLC(ListeC liste);            // taille de la liste 
void addLC(ListeC liste, int value); // ajouter un élément dans la liste 
int getLC(ListeC liste, int pos);	 // récupération d'une valeur par leur position 

void replaceLC(ListeC liste, int value, int pos); // remplacer une valeur par une autre 
void insertLC(ListeC liste, int value, int pos);  // insérer une valeur à une position et décaler le reste des éléments vers la droite 
void removeLC(ListeC liste, int pos);             // enlever un élément de la liste 

// NB : dans cette version insertLC à la position 0 ne fonctionne pas pour mon liste-c.o dans mon dossier lib  

/* Structure de donnée portant l'information de chauqe noeud*/
typedef struct st_nodeLC{
    int valeur;                    // valeur entière située sur ce noeud de la liste 
    struct st_nodeLC * next;       // pointeur vers le noeud suivant de type struct st_nodeLC (NULL => noeud courant = dernier de la liste)
} NodeLC;

/* Liste chainée */
typedef struct st_listeC {
    NodeLC * premier;              // pointeur vers le premier nœud
} ListeC;

