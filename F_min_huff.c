#include "fonction.h"
liste_HUFFMAN* F_min_huff(liste_HUFFMAN *l_huff){
    struct liste_HUFFMAN *min_h;
    min_h = l_huff; //on initie toujours le minimum a la premiére case de la liste
    struct liste_HUFFMAN *tampon;

    while(l_huff->suivant != NULL){                                       //on parcour toute la liste des cases de huffman qui ne sont pas relié a un neaud
        if((min_h->poid) > (l_huff->suivant->poid)){                     //si la case visité a un poid plus faible que celle considéré comme tel, alors on la déplace au début de la liste
            tampon = l_huff->suivant->suivant;                          //une fois au début de la liste on est sur que l'osque l'on rendra la liste, la premiére case celle de poid le plus faible
            l_huff->suivant->suivant = min_h;                          //cette case sera ensuite suprimé dans la fonction de trie
            min_h = l_huff->suivant;                                  //on répétera l'opération deux fois pour isoler les deux cases de poid les plus faible pour les confier aux pointeurs droite et gauche
            l_huff->suivant = tampon;                                //la nouvelle case de neaud ainsi créé prendra la place de premiére case de la liste des cases n'étant pas relié a un neaud supérieur
        }else{                                                      //le programme se finissant lorsqu'il ne reste plus que une seul case qui deviendra alors la RACINE de l'arbre de HUFFMAN
            l_huff=l_huff->suivant;
        }//fin if
    }//fin while///////////////////////////////////////////////////////////
    printf("SORTI WHILE F_MIN");
    return min_h;
}//fin F_min_huff
