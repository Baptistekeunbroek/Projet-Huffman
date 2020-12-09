liste_HUFFMAN* trier_liste_huff(liste_HUFFMAN *l_huff){         //VOIR LE COMMENTAIRE DANS LA FONCTION F_min_huff POUR UN SUPLEMENTT D'EXPLIATION sur le fonctionement de cette fonction
    struct liste_occur *l_occur_vide;
    l_occur_vide = creer_case_liste_occur('a');                            //fausse case de liste_occur qui sert de modéle par la création des nouvelles case de la liste de neud de HUFFMAN
    struct liste_HUFFMAN *tampon;

    while(l_huff->suivant != NULL){                                  //si la téte de liste_huffman ne pointe pas sur vide c'est qu'il reste encore au moins deux neaud dans la liste a fusionner pour donner la racine de l'arbre
        struct liste_HUFFMAN *neaud;                                         //on creer de nouvelle case neaud qui vont abriter dans leurs branches gauche et droite les deux plus petites case de la liste_uffman(l_huff)
        neaud = creer_case_huff(l_occur_vide);                              //les nouvelles cases creer sont vide cad sans caractére et avec un poid = 0
        neaud->symbole = NULL;

        printf("\n\nchoix branche droite\n\n");
        l_huff = F_min_huff(l_huff);                                //ici on trouve la case au poid le plus faible et on en fait la branche droite du neaud en cour de creation
        printf("");afficher_liste_huff(l_huff);///liste de teste/debug
        tampon = l_huff->suivant;
        l_huff->suivant = NULL;
        neaud->droite = l_huff;
        l_huff = tampon;
        //printf("\n\n");afficher_liste_huff(l_huff);///liste de teste/debug

        printf("\n\nchoix branche gauche\n\n");

        l_huff = F_min_huff(l_huff);                                //ici on trouve la case au poid le plus faible et on en fait la branche gauche du neaud en cour de creation
        printf("");afficher_liste_huff(l_huff);///liste de teste/debug
        tampon = l_huff->suivant;
        l_huff->suivant = NULL;
        neaud->gauche = l_huff;
        l_huff = tampon;
        neaud->gauche->num_h = 1;                                           //le num des branche a gauche de HUFFMAN est =1 car a droite elle sont naturelement initié a 0.

        neaud->poid = neaud->droite->poid + neaud->gauche->poid; //on aditionne le poid des deux sous branches deux sous branches pour determiner le poid du neaud
        tampon = l_huff;
        neaud->suivant = l_huff;
        l_huff=neaud;
        if(l_huff->symbole == NULL){printf("\n++++\n");afficher_liste_huff(l_huff);}///liste de teste/debug
    }//fin while
    return l_huff; //on rend la racine de l'arbre
}//fin trier_liste_huff
