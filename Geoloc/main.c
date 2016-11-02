/**
 * Pour compiler :  gcc *.c -o prog `pkg-config --cflags --libs gtk+-3.0` `pkg-config --cflags cairo`
 */
#include <cairo.h>
#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <math.h>
#include "data.h"
#include "parcours_list.h"
#include "traitement-donnees.h"
#include "graphic.h"



void traitementDonnees(){
  //  LambertToGPS(1029705.083,272723.849);
  LambertToGPS(655645.0,6664862.0);
}

void graphic(){
    /*
     * Partie graphique
     */
}


int main(int argc, char *argv[]){
    traitementDonnees();

    return 0;
}
