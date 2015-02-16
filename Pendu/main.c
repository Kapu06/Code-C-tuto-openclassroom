#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "jeu.h"
#define TAILLE_MAX 100

/* Se servir de motCache.txt pour y stocker les asterix -> les afficher et y modifier dedans le mot trouvé au fur et à mesure */

int main()
{
    int coupsRestant=10, longeurChaine=0, i=0, compteurCoups=0;
    char maLettre = 0, motSecret[]="MARRON", motCache[]="", *pointeurRecherche = NULL;

//Calcul du nombre d'asterix à afficher
longeurChaine=strlen(motSecret);
/*for (i=0;i<=longeurChaine;i++)
{
    motCache[i]="*";
} */  //Faire une allocation dynamique de la taille du tableau
 /*motCache=malloc(longeurChaine * sizeof(char)); échec d'allocation dynamique */



//Début de présentation du jeu
printf("=========================\n\tLE PENDU\n=========================\n");
printf("\n\nBienvenu dans ce jeu du pendu jeune aventurier.\nAvant de commencer je vais t'énumérer les quelques règles\n que tu devras respecter:");
printf("\n\t1.Tu devras trouver le mot mystère en moins de 10 coups sinon\n\tun innocent mourra.\n\t2.Tu ne pourras proposer qu'une et une seule lettre par tours.\n");
printf("\n\nPrêt?....\n\n");

while (coupsRestant !=0)
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
        coupsRestant==0; //tentaive d'arrêt du jeu: à voir si fonctionne, mais doute
    }



}

//Afficher message perdu jeu






    return 0;
}
