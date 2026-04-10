#include "liste-c.h"

ListeC createLC(){
    // Créaction d'une liste de type Liste C - le premier élément est NULL on retourne cette liste
    ListeC liste;
    liste.premier = NULL;
    return liste;
} 

int sizeLC(ListeC liste){
    /*Concepte : on a un compteur qui va compter la taille de la liste de type ListeC il faut se positionner sur la première valeur du 
    tableau ensuite on avance au fur et à mesure en prenant soin qu'à chaque fois que l'on avance on implémente le compteur de + 1 quand la valeur est NULL
    cela veut dire que l'on est arrivé à la fin et on retourne le nombre que l'on a dans notre variable pointeur
    */ 
    int compteur = 0;
    ListeC liste; 
    NodeLC valeur = liste.premier; 

    while(valeur != NULL){
        compteur += 1;
        valeur.next();
    }
    return compteur; 
}

void addLC(ListeC liste, int value){


}

int getLC(ListeC liste, int pos){


}

