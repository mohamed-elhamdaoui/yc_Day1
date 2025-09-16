    #include <stdio.h>

    int main() {

        int num , inverse ; 
        inverse = 0; 
        printf("Veuillez saisir un nombre : ");
        scanf("%d",&num);
        while(num!=0){
        
            inverse=inverse*10+(num%10);
            num=num/10;
        }
    
        printf("%d",inverse);
        return 0;

    }
    