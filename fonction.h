/*****************************************************************//**
 * \file   fonction.h
 * \brief  file with 2 strucutre
 * 
 * \author Thibault, Baptiste, Leonie, Camille, Gabriel
 * \date   Decembre 2020
 *********************************************************************/

#ifndef FONCTION
#define FONCTION

/**
 * \typedef struct liste_occur
 * \brief a occur list to count a character.
 */
typedef struct liste_occur                                        
{
    char symbole;
    int nmb_occur;
    int code_bin[8];  
    struct liste_occur *suivant;
}liste_occur;

/**
 * \typedef struct liste_HUFFMAN
 * \brief a list to search the path in the tree.
 */
typedef struct liste_HUFFMAN
{
    int num_h;
    int poid;
    char symbole;
    struct liste_HUFFMAN *suivant;
    struct liste_HUFFMAN *droite;
    struct liste_HUFFMAN *gauche;
}liste_HUFFMAN;

#endif  
