    #include <stdio.h>

    int main() {
        int num ;
        printf("Veuillez saisir un nombre : ") ;
        scanf("%d",&num);
        if(num % 2 == 0)
        printf("le nombre %d est pair \n",num);
        else
        printf("le nombre %d est impair",num );
        return 0;
    }