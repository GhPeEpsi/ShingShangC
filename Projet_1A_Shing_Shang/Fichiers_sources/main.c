#include "structures.h"
#include "affichage.h"
#include "verif.h"
#include "initialisation.h"


void main()
{

 //###### coment #######
 //Cette fonction est le début ce sera celle qui sera lancé
 //

 //creation des variables, pseudo, plateau, ... :
 perso pseudo1, pseudo2;
 int tmp, res	;
 case_pla plateau[HAU_PLA][LAR_PLA];
 deplacement move;
 printf("salut");

 //on commence par afficher l'entéte :
 //entete();

 remp_pla(plateau);
 aff_pla(plateau);

 //lancement des demandes de jeu :

 //lancement des verifs
 choix_verif(&move, plateau);

 //choix_singe(move, plateau);
}
