    #include <stdio.h>

    int main() {
        char crctr ;
        printf("Veuileez saisir un caractere : ");
        scanf("%c",&crctr);

        switch (crctr)
        {            /* a, e, i, o, u, et y */
        case 'a':
            printf("le caractere est un voyelle");
            break;
        case 'e':
            printf("le caractere est un voyelle");
            break;
        case 'i':
            printf("le caractere est un voyelle");
            break;
        case 'o':
            printf("le caractere est un voyelle");
            break;
        case 'u':
            printf("le caractere est un voyelle");
            break;
        case 'y':
            printf("le caractere est un voyelle");
            break;
        
        default:
        printf("le caractere n'est pas voyelle");
            break;
        }
    }