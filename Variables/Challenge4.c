#include <stdio.h>

int main() {
   float km_h, m_s;
   printf("Transmettre la vitesse en km/h vers m/s \n");
   printf("Veuillez saisir la vitesse en kilometres par heure (km/h) : ");
   scanf("%f", &km_h);

   m_s = km_h * 0.27778;

   printf("La vitesse %.4f km/h en m/s est : %.4f\n", km_h, m_s);

   return 0;
}
