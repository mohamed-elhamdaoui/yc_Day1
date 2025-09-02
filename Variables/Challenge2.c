#include <stdio.h>
int main() {
   float temp_c , temp_k;
   printf("Veuillez saisir la temperature en Celsius : ");
   scanf("%f",&temp_c);
   temp_k = temp_c + 273.15 ;
   printf("la temperature en Kelvin est : %.2f",temp_k);
   return 0;
}
