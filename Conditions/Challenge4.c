#include <stdio.h>
#include <math.h>
    int main() {
        int a , b , c ;
        int delta ;
        printf("\nResoudre Equation du DeuxiEme Degre (ax2 + bx + c). \n");
        printf("entrer les coififient de l'equation en ordre suivant: a,b et c : ");
        scanf("%d %d %d",&a,&b,&c);
        
        delta = pow(b , 2) - 4*a*c ;

        if (delta>0)
        {
            printf("delta = %d > 0, alors :\n",delta);

            printf("l'equation %dx2 + %dx + %d accept deux solution sont : ",a,b,c);
            int x1 = (-b - sqrt(delta)) / 2*a;
            int x2 = (-b + sqrt(delta)) / 2*a;

        printf("x1= %d , x2= %d",x1,x2);

        }
        else if(delta==0)
        {
            printf("delta = %d alors :\n",delta);

            printf("l'equation %dx2 + %dx + %d accept une seul solution sont : ",a,b,c);
            int x0 = -b  / 2*a;
            printf("x0= %d ",x0);
        }
        else {
        printf("delta = %d < 0, alors :\n",delta);
        printf("L'equation n'aucune  solution reelle. ") ;
        }

        
        //printf("x1= %d , x2= %d",x1,x2);

        return 0;
    

        }
        