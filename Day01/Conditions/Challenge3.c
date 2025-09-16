    #include <stdio.h>

    int main() {
        int num1 , num2 ;
        printf("La somme de deux nombre entiers : \n");
        printf("Entrer la valeur de premier nombre : ");
        scanf("%d",&num1);
        printf("Entrer la valeur de deuxieme nombre : ");
        scanf("%d",&num2);
        printf("la somme est : %d",num1+num2);
        //int somme = num1 + num2 ;

        if(num1 == num2){
        int result = (num1+num2) * 3 ;
        printf("les deux nombres sont identiques ,voila leur triple de leur somme : %d",result);
        }
        return 0;
    }