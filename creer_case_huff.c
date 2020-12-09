#include "fonction.h"
liste_HUFFMAN* creer_case_huff(liste_occur * l_occur){

    liste_HUFFMAN* nouv_case;
    nouv_case = malloc(sizeof(liste_occur));
    nouv_case->num_h = 0;
    nouv_case->symbole = l_occur->symbole;
    nouv_case->poid = l_occur->nmb_occur;
    nouv_case->droite = NULL;
    nouv_case->gauche = NULL;
    nouv_case->suivant = NULL;

    return(nouv_case);
}//fin creer_case_huff
