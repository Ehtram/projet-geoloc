#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <time.h>
#include "data.h"
#include "parcours_list.h"
#include "traitement-donnees.h"


/**
 * @brief Création d'un nouveau point
 * @param t timestamp
 * @param longi longitude
 * @param lat latitude
 * @return structure point
 */
dataPoint* newPoint(int t,double longi, double lat){
  dataPoint * temp = (dataPoint *) malloc(sizeof(dataPoint));
  temp->time = t;
  temp->longitude = longi;
  temp->latitude = lat;

  return temp;
}

/**
 * @brief Affichage d'un point
 * @param d structure point
 */
void displayData(dataPoint * d){
   int i,j;

   if(d == NULL){
      printf("C'est nul!");
   }
   printf("----Un point de parcours\n");
   printf("Time : %d\n", d->time);
   printf("Longitude : %lf\n", d->longitude);
   printf("Latitude : %lf\n", d->latitude);
   printf("----\n");


}

void timeTxt(time_t timestamp){
   time_t t = timestamp;
   const char *format = "%A %d %B %Y %H:%M:%S";

   struct tm lt;
   char res[32];

   localtime_r(&t, &lt);

   if (strftime(res, sizeof(res), format, &lt) == 0) {
        fprintf(stderr,  "strftime(3): cannot format supplied "
                                        "date/time into buffer of size %u "
                                        "using: '%s'\n",
                                        sizeof(res), format);
        exit(EXIT_FAILURE);
   }
   printf("TEST time\n");
   printf("%s\n", res);

}


/**
 * @brief Affichage de la distance entre deux points a partir de leurs coords GPS
 * @param d1 structure point
 * @param d2 structure point
 */
double distanceBtwnPoints(dataPoint * d1, dataPoint * d2){
   int R;
   double lat_a, lon_a, lat_b, lon_b, d;
   R = 6371000; //Rayon de la terre en mètre

   printf("Lat 1 : %lf long 1 : %lf\n", d1->latitude, d1->longitude);
   printf("Lat 2 : %lf long 2 : %lf\n", d2->latitude, d2->longitude);

   lat_a = to_radians(d1->latitude);
   lon_a = to_radians(d1->longitude);

   lat_b = to_radians(d2->latitude);
   lon_b = to_radians(d2->longitude);

   printf("Lat 1 : %lf long 1 : %lf\n", lat_a, lon_a);
   printf("Lat 2 : %lf long 2 : %lf\n", lat_b, lon_b);

   timeTxt(d1->time);



   d = R * (M_PI/2 - asin( sin(lat_b) * sin(lat_a) + cos(lon_b - lon_a) * cos(lat_b) * cos(lat_a) ) );
   return d;

}

/**
 * @brief Destruction d'un point
 * @param d structure point
 */
void destroyPoint(dataPoint * d){
   free(d);
}

// a tester
parcours anonymous(parcours * listePoint){

   parcours* temp = listePoint;
   dataPoint* p1;
   dataPoint* p2;

   listePointAnoynyme = initParcours();

   while(temp->next != NULL){
      p1 = temp->pt;
      p2 = temp->next->pt
      while(distanceBtwnPoints(p1,p2) =< 150){
        addPoint(p2,listePointAnoynyme);
        temp = temp->next;
        p2 = temp->pt;
      }
   }
   return listePointAnoynyme;
}