liste_occur* crea_liste_occur(FILE *livre, FILE *livre1_binaire, liste_occur *l_occur){
    char car_actuel;
    struct liste_occur *head;
    head=l_occur;
    while((car_actuel = fgetc(livre)) != EOF){
       // printf("%c",car_actuel);///optionel pour phase de teste
        do{
            if(l_occur->symbole == car_actuel){                                 //on cherche si le car actuel est a la case pointé
                                                                               //on ne fait rien et le while se finira de lui même puis incrémentera le nmr d'occurence au bon endroit
            }else if(l_occur->suivant == NULL){                               //SINON on pointe et recommence la verif a la case de la liste suivante si elle existe,
                l_occur->suivant = creer_case_liste_occur(car_actuel);       //si elle n'existe pas on la crée en fonction du caractére que lon cherche a placer actuelment
                l_occur = l_occur->suivant;
            }else{
                l_occur = l_occur->suivant;
            }//fin des if/else
        }while(l_occur->symbole != car_actuel);//fin du do-while
        l_occur->nmb_occur=l_occur->nmb_occur+1;                        //maintenant que la case l_occur où on peut ranger le cacar en cour de lecture on on y augmente le nmbre d'occurence

        for(int i=7; i >= 0; i--){                                         //ici a chaque lecture de caractére on le réecri dans le livre_binaire
            putc(l_occur->code_bin[i], livre1_binaire);                   //
        }
        l_occur=head;//on réinitialise toujours la téte 'l_occur' de la liste qui ici sert de curseur de lectur

    }//fin du while

    return(l_occur);
}//fin crea_liste_occur
