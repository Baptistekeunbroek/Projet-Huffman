void F_contage_char_livres(){
    FILE *livre,*livre_compr,*livre_binaire;
    livre = fopen("Biblio/Livre1", "r");
    livre_compr = fopen("Biblio/Livre1_compr", "r");
    livre_binaire = fopen("Biblio/Livre1_binaire", "r");

    char ccl;                                                            //ici on lit 3 livre.txt
    int nbcaract=0;                                                     //afin d'afficher le nombre de caractére présent dans chaqun des douments
    while((ccl = fgetc(livre)) != EOF){                                //généralement on choisi le livre1 et les fichiers texte dans lesquelle il à été traduit en bianire et compréssé
        nbcaract++;
    }//fin du while
    printf("\n\nIl y a %d caracteres dans le livre1\n",nbcaract);

    nbcaract=0;
    while((ccl = fgetc(livre_compr)) != EOF){
        nbcaract++;
    }//fin du while
    printf("\nIl y a %d caracteres dans le livre1 compresse par Huffman\n",nbcaract);

    nbcaract=0;
    while((ccl = fgetc(livre_binaire)) != EOF){
        nbcaract++;
    }//fin du while
    printf("\nIl y a %d caracteres dans le livre1 en binaire\n",nbcaract);

    fclose(livre);
    fclose(livre_compr);
    fclose(livre_binaire);
}//fin de void F_contage_char_livres