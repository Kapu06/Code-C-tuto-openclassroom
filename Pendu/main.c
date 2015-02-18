#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "jeu.h"

/* Se servir de motCache.txt pour y stocker les asterix -> les afficher et y modifier dedans le mot trouvé au fur et à mesure */
/*Ecrit bien dans le fichier mais, rajoute un + à la fin; vider le fichier au
début du programme!!; pb d'affichage nombre de coups et caractère saisi, réglé
si enlève le '*' à ligne 22 du pointeur, mais pose pb de motCache=****** */

int main()
{
    int coupsRestant=10,compteurCoups=0;
    char maLettre = 0, motSecret[]="MARRON",motCache[]="", *pointeurRecherche = NULL;

    FILE* fichierMotCache = NULL;
    fichierMotCache = fopen("motCache.txt","r+");

masquageMotCahe(motSecret,motCache);
verificationOuvertureFichier(fichierMotCache, motCache);



//Début de présentation du jeu
printf("=========================\n\tLE PENDU\n=========================\n");
printf("\n\nBienvenu dans ce jeu du pendu jeune aventurier.\nAvant de commencer je vais t'énumérer les quelques règles\nque tu devras respecter:");
printf("\n\t1.Tu devras trouver le mot mystère en moins de 10 coups sinon\n\tun innocent mourra.\n\t2.Tu ne pourras proposer qu'une et une seule lettre par tours.\n");
printf("\n\nPrêt?....\n\n");

while (coupsRestant >0)
{

    printf("\n\nIl vous reste %d coups à jouer\n", coupsRestant);
    printf("Quel est le mot secret?: %s", motCache);//Bug sur l'affichage des étoiles
    printf("\nPropose une lettre si tu l'oses: ");
    maLettre=lirecaractere();
    pointeurRecherche=strchr(motSecret,maLettre); //Je récupère dans un pointeur l'adresse de la lettre trouvée
    if (pointeurRecherche!=NULL)
    {
        printf("Voici ce que tu as trouvé: %c", *pointeurRecherche);//Affiche uniquement la/les lettres trouvées
    }
    coupsRestant--;
    compteurCoups++;


    if (strcmp(motSecret,motCache)==0)
    {
        printf("Bravo!! Vous avez découvert le mot mystère!\n\n");
        printf("%d innocents sont morts par votre faute au cours de cette partie...", compteurCoups);
        coupsRestant==0; //tentative d'arrêt du jeu: à voir si fonctionne, mais doute
    }



}

//Afficher message perdu jeu

    return 0;
}
