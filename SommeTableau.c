#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau);

int main()
{
    int Tableau[9]={12,78,1000,101,100,1,2,90,1}, resultat = 0 ;

    resultat=sommeTableau(Tableau, 9);

    printf("%d\n", resultat);
    printf("%d\n",Tableau[6]);

    return 0;
}


int sommeTableau(int tableau[], int tailleTableau)
{
    int i=0, resultat=0, resultat1=0;

    for(i=0;i<tailleTableau;i++) //trouver moyen d'aller à + 1 dans le tableur

    {
        resultat1=tableau[i];
        resultat=resultat1+resultat;


    }

    return resultat;
}

