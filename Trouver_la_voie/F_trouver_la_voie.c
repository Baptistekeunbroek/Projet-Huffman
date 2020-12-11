int F_trouver_la_voie(liste_HUFFMAN *l_huff,int chemin_valide ,char ccl,FILE *livre1_compr){

    if(ccl == l_huff->symbole ){
            chemin_valide = 1;
    }//verification si le symbole de la case ou  l'on pointe est la bonne

    if(chemin_valide == 1){
            putc(l_huff->num_h, livre1_compr);
            //printf("%d",l_huff->num_h);///pour afficher le code de huffman de chaque carac au cour de sa recherche
            return chemin_valide;//porte de sortie
    }else{

        if(l_huff->gauche != NULL){
        chemin_valide = F_trouver_la_voie(l_huff->gauche, chemin_valide ,ccl ,livre1_compr);}

        if(l_huff->droite != NULL){
        chemin_valide = F_trouver_la_voie(l_huff->droite, chemin_valide ,ccl ,livre1_compr);}

    }//fin du if de recherche et de recursivité

}//fin F_trouver_la_voie