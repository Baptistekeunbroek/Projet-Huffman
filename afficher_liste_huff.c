#include "fonction.h"
void afficher_liste_huff(liste_HUFFMAN *l_huff){
    while(l_huff != NULL){
        printf("  %c:%d ",l_huff->symbole ,l_huff->poid );

        l_huff=l_huff->suivant;
    }//fin while
}//fin afficher_liste_occur
