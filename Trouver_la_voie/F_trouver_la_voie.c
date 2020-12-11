/*****************************************************************//**
 * \file   Huffman
 * \brief  Fonction pour trouver chrcher chemin 
 * \n Example :
 * \code{.c}
 * chemin_valide = 1;
 * \endcode
 * \return verification si le symbole de la case ou  l'on pointe est la bonne.
 * \author Thibault, Baptiste, Leonie, Camille, Gabriel
 * \date   Decembre 2020
 *********************************************************************/
int F_trouver_la_voie(liste_HUFFMAN *l_huff,int chemin_valide ,char ccl,FILE *livre1_compr){

    if(ccl == l_huff->symbole ){
            chemin_valide = 1;
    }

    if(chemin_valide == 1){
            putc(l_huff->num_h, livre1_compr);
            
            return chemin_valide;
    }else{

        if(l_huff->gauche != NULL){
        chemin_valide = F_trouver_la_voie(l_huff->gauche, chemin_valide ,ccl ,livre1_compr);}

        if(l_huff->droite != NULL){
        chemin_valide = F_trouver_la_voie(l_huff->droite, chemin_valide ,ccl ,livre1_compr);}

    }

}