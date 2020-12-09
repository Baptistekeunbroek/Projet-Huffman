#define FONCTION


typedef struct liste_occur                                          //liste des occurence de chaque caract�res dans le texte
{
    char symbole;
    int nmb_occur;
    int code_bin[8];  //on stockera dans cette liste la traduction en binaire de chaque caract puis au moment de leur ajout
    struct liste_occur *suivant;
}liste_occur;

typedef struct liste_HUFFMAN
{
    int num_h;
    int poid;
    char symbole;
    struct liste_HUFFMAN *suivant;
    struct liste_HUFFMAN *droite;
    struct liste_HUFFMAN *gauche;
}liste_HUFFMAN;
