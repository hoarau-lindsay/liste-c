/* Test 3 */
#include "liste-c.h"
#include <stdio.h>

int affiche(ListeC liste){

    int n = sizeLC(liste);

    for (int i = 0; i < n; i++){
        printf("%d -> ", getLC(liste, i));
    }

    printf("NULL \n");

    return 0;
}

int main(){
    ListeC liste = createLC(); 

    addLC(liste, 32);
    addLC(liste, 24);
    addLC(liste, 5);
    addLC(liste, 7);

    printf("La liste orignale ");
    affiche(liste);
    printf("\n");

    replaceLC(liste, -15, 0);	

    printf("La liste après remplacement ");
    affiche(liste);
    printf("\n");

    insertLC(liste, 0, 1);
    insertLC(liste, 64, 0);

    printf("La liste après insertion ");
    affiche(liste);
    printf("\n");

    removeLC(liste, 2);

    printf("La liste après suppresion ");
    affiche(liste);
    printf("\n");

    printf("Liste finale ");
    affiche(liste);

    return 0;
}

