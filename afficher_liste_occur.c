#include "fonction.h"
void afficher_liste_occur(liste_occur *l_occur){
    int i=0;
    while(l_occur != NULL){
        printf("\n%c : %d : %d : ",l_occur->symbole ,l_occur->nmb_occur ,l_occur->symbole);
        for(i=7; i >= 0; i--){
            printf("%d",l_occur->code_bin[i]);
        }

        l_occur=l_occur->suivant;
    }//fin while
}//fin afficher_liste_occur
