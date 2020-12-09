liste_HUFFMAN* crea_liste_huff(liste_occur *l_occur,liste_HUFFMAN *l_huff){

    struct liste_HUFFMAN *head_h;
    struct liste_occur *head_o;
    head_o = l_occur;
    head_h = l_huff;
    l_occur = l_occur->suivant;
    //printf(" %c+%d",l_huff->symbole,l_huff->poid);///ligne de teste/debug
    while(l_occur != NULL){                                     //
        l_huff->suivant = creer_case_huff(l_occur);

        l_occur = l_occur->suivant;
        l_huff = l_huff->suivant;
        //printf(" %c+%d",l_huff->symbole,l_huff->poid);///ligne de teste/debug
    }//fin while

    l_occur = head_o;
    l_huff = head_h;

    return l_huff;
}//fin crea_liste_huff
