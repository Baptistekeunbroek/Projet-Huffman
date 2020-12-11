void F_lecture_reecriture_compr(FILE *livre1,FILE *livre1_compr,liste_HUFFMAN *l_huff){
    rewind(livre1); // retour du curseur de lecture au début du livre
    //fclose(livre1);
    //livre1 = fopen("Biblio/Livre1", "r");
    char ccl;//Caract en Cour de Lecture
    int chemin_valide ;

    while((ccl = fgetc(livre1)) != EOF){
        chemin_valide = 0;
        chemin_valide = F_trouver_la_voie(l_huff, chemin_valide ,ccl ,livre1_compr);     //ici retrasser le chemin jusqu'a la lettre en cour de lecture
        //if(chemin_valide==0){printf("FAIL");}
        printf("%c",ccl);
        // et putc des 0 ou des1 en fonction des embrenchements droite ou gauche pris
                                //UTILISER UNE FONCTION RECURSIVE ?
    }//fin du while

}//fin de void F_lecture_reecriture