#include <stdio.h>
#include <stdlib.h>
#include "structures.h"


int main()
{
int i=0;
Personne joueur[i]; //définition variables joueurs type Personne
Personne agejoueur;

for(i=0;i<2;i++)
{
 //Présentation du jeu
 printf("\nBonjour à vous\nCe jeux se joue à deux joueurs maximum pour le moment.\nAvant de démarrer, il me faudrait quelques informations pour créer vos avatars.\n");
 //Demande du prénom
 printf("Quel est votre prénom joueur %d?:\t",i);
 scanf("%s",joueur[i].prenom);
 //Demande du nom
 printf("\nQuel est votre nom?\t");
 scanf("%s",joueur[i].nom);
 //Demande du signe astrologique
 printf("\nQuel est votre signe astrologique?\t");
 scanf("%s",joueur[i].signe_astrologique);
 //Demande de l'âge
 printf("\nQuel âge avez-vous?\t");
 scanf("%d", &agejoueur.age);
 /* Je ne vois pas encore comment faire de booléen ici
 printf("Êtes-vous:\n\t1. Un garçon?\n\t2.Une Fille?\n (Répondez par '1' ou '2')\n");
 scanf("%d",joueur[i].sexe);
 */
    printf("Très bien joueur%d, voici tes informations:\nPrénom:%s\nNom:%s\nSigne astrologique:%s\nVotre âge:%d\n\n", i,joueur[i].prenom,joueur[i].nom,joueur[i].signe_astrologique,agejoueur.age);

}

/*for (i=0;i<2;i++)
{
    printf("Très bien joueur%d, voici tes informations:\nPrénom:%s\nNom:%s\nSigne astrologique:%s\nVotre âge:%d\n\n", i,joueur[i].prenom,joueur[i].nom,joueur[i].signe_astrologique,agejoueur.age);
}*/



    return 0;
}

