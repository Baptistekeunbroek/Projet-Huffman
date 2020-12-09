#include "fonction.h"
void F_ecriture_dico(liste_occur *l_occur,liste_HUFFMAN *l_huff,FILE *livre1_compr_dico){
    int chemin_valide;
    while(l_occur != NULL){                                                           //on traverse toute la liste des occurences
        putc(l_occur->symbole, livre1_compr_dico);  putc(59, livre1_compr_dico);
        putc(l_occur->nmb_occur, livre1_compr_dico);   putc(59, livre1_compr_dico);
        chemin_valide = 0;
        chemin_valide = F_trouver_la_voie(l_huff, chemin_valide ,l_occur->symbole ,livre1_compr_dico);
        putc(32, livre1_compr_dico);
        l_occur = l_occur->suivant;
    }//fin while

    fclose(livre1_compr_dico);
}//fin F_ecriture_dico
