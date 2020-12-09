#include "fonction.h"
liste_occur* creer_case_liste_occur(char c)
{
    int i=7;
    liste_occur* nouv_case;
    nouv_case = malloc(sizeof(liste_occur));
    nouv_case->symbole = c;
    nouv_case->nmb_occur = 0;
    for(i=0; c > 0; i++)                    //ici on converti le num ascii du caractére c en binaire
      {                                    //par fraction on rempli les cases du tableu
        nouv_case->code_bin[i] = c%2;     //le num binaire est alors rentré à l'envers dans le tableau
        c = c/2;                         //c'est pourquoi dans la fonction affichage, la boucle for on affiche d'abord les derniéres cases du tableau
      }
    nouv_case->suivant = NULL;
    return(nouv_case);
}//fin creer_case_liste_occur
