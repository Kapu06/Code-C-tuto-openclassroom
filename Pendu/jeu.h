#ifndef DEF_JEU
#define DEF_JEU

char lirecaractere()
{
    char caractere = 0;

    caractere = getchar();//Lit le premier caractère
    caractere = toupper(caractere);

    while(getchar() != '\n');

    return caractere;
}



#endif // DEF_JEU
