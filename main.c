#include "fonction.h"

int main()
{
    FILE *livre1,*livre1_compr,*livre1_binaire,*livre1_compr_dico;                                   //creation de pointeurs sur les fichiers texte livre
    livre1_compr_dico = fopen("Biblio/Livre1_compr_dico", "w+");
    livre1 = fopen("Biblio/Livre1", "r");                                        //on a rang� les fichiers texte dans un sous dossier "Biblio"
    livre1_compr = fopen("Biblio/Livre1_compr", "w+");                          //
    livre1_binaire = fopen("Biblio/Livre1_binaire", "w+");                     //

    struct liste_occur *l_occur;                                                   //cr�ation de la t�te de la liste de stockage des occurence et trad en bianire
    l_occur = creer_case_liste_occur(' ');                                        //initialistaions des variables de la premi�re case de la liste /// on consid�re ' ' comme par d�faut pr�sent dans la premi�re case
    l_occur = crea_liste_occur(livre1,livre1_binaire,l_occur);                   //lecture du livre 1, et stockage du nomre d'occurence de ses charact�res

    afficher_liste_occur(l_occur);                                             //affichage de la liste des occurences leur num ascii et leur conv en bianire

    printf("\n\nBARAGE 1 CREAION 1ere CASE DE l_huff\n");///ligne de teste et debug
    struct list_HUFFMAN *l_huff;                                                  //on suit la m�me m�thode de crea de liste que liste occur
    l_huff = creer_case_huff(l_occur);                                           //

    printf("\n\nBARAGE 2 CREATION LISTE DE TOUTES LES FEUILLES DE l_huff\n\n");///ligne de teste et debug
    l_huff = crea_liste_huff(l_occur,l_huff);
    afficher_liste_huff(l_huff);///liste de teste/debug                                //

    printf("\n\nBARAGE 3 CREATION des BRANCHES(neaud) et TRIE des feuilles\n\n");///ligne de teste et debug
    l_huff = trier_liste_huff(l_huff);                                         //une fois la liste de neaud cr�er on la trie pour former l'arbre de HUFFMAN
    printf("\nPORTE DE SORTIE arbre HUFMMAN fini\n");///ligne de teste et debug


    F_lecture_reecriture_compr(livre1,livre1_compr,l_huff);                     //on reecri le livre1 dans son fichier compress� par HUFFMAN
    F_ecriture_dico(l_occur,l_huff,livre1_compr_dico);

    fclose(livre1);                                                            //une fois les dossiers utilis� on les fermes
    fclose(livre1_compr);                                                     //
    fclose(livre1_binaire);                                                  //

    F_contage_char_livres();                    //affichage du nombre de caract�res dns les trois fichiers texte

    printf("\n LE PROGRAMME SE FINIT SANS BUG\n\n");
    return 0;
}

