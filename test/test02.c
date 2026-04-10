/* Test 1 */
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

    affiche(liste);

    return 0;
}

