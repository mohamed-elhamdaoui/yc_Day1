#include <stdio.h>
int main() {
   float distance_km , yards;
   printf("Veuillez saisir la distance en kilometres : ");
   scanf("%f",&distance_km);
   yards = distance_km * 1093.61 ;
   printf("la distance en yards est : %.2f",yards);
   return 0;
}
