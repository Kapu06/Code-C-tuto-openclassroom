#ifndef DEF_JEU
#define DEF_JEU
#define TAILLE_MAX 26


char lirecaractere()
{
    char caractere = 0;

    caractere = getchar();//Lit le premier caractère
    caractere = toupper(caractere);

    while(getchar() != '\n');

    return caractere;
}

void recuperationMotSecret (FILE* fichierMotSecret, char motSecret[])
{
    if (fichierMotSecret != NULL)
    {
        fgets(motSecret, TAILLE_MAX, fichierMotSecret);
        fclose(fichierMotSecret);
    }
    return 0;
}

void masquageMotCahe(char pointeurMotSecret[],char pointeurMotCache[])
{
int longeurChaine=0, i=0;

    longeurChaine=strlen(pointeurMotSecret);//calcul longeur nécessaire pour taille motCache

*pointeurMotCache = malloc(longeurChaine * sizeof(char));//allocation dynamique mémoire
if (pointeurMotCache == NULL)
{
    exit(0);//arrêt du programme si échec allocation mémoire
}
else
{
        for (i=0;i<longeurChaine;i++)//Calcul du nombre d'asterix à afficher: bug!

{
    pointeurMotCache[i]='*';
}
}

}

void verificationOuvertureFichier (FILE* fichierMotCache, char motCache[])
{
      if (fichierMotCache != NULL)
 {
    fprintf(fichierMotCache, "%s", motCache); //Ecriture dans le fichier motCache.txt du motCache (***)

      fclose(fichierMotCache);
 }

 else
 {
     printf("Impossible d'ouvrir le fichier motCache.txt");
 }

}

void incrementageCoups (int *pointeurCoupsRestants, int *pointeurCompteurCoups)
{

*pointeurCoupsRestants --;

*pointeurCompteurCoups ++;

}


#endif // DEF_JEU
