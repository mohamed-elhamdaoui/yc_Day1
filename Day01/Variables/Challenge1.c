#include <stdio.h>

int main() {
    char nom[30];
    char prenom[30];
    int age ;
    char sexe ;
    char adresse_email[90];

    printf("Veuillez saisir votre nom : ");
    scanf("%s",&nom);
    printf("Veuillez saisir votre prenom : ");
    scanf("%s",&
        prenom);
    printf("Veuillez saisir votre age : ");
    scanf("%d",&age);
    printf("Veuillez saisir votre sexe[M/F] : ");
    scanf(" %c",&sexe);
    printf("Veuillez saisir votre adresse email : ");
    scanf("%s",&adresse_email);


    printf("Le nom : %s\n",nom);
    printf("Le prenom : %s\n",prenom);
    printf("L'age : %d\n",age);
    printf("Le sexe : %c\n",sexe);
    printf("L'adresse email : %s\n",adresse_email);

    return 0;
}
