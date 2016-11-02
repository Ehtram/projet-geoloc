//
//  traitement-donnees.h
//  Geoloc
//
//  Created by Quentin Laplanche on 21/10/2016.
//  Copyright © 2016 projet-geoloc. All rights reserved.
//

#ifndef traitement_donnees_h
#define traitement_donnees_h

#include <stdio.h>
#include <math.h>




double to_degrees(double radians);
double to_radians(double degrees);
void GPStoLambert();
void LambertToGPS(double XLAMB, double YLAMB);

// // Les constantes qui marche sur le jeu d'essai
// #define N 0.760405966
// #define C 11603796.9767
// #define XS 600000.0
// #define YS 5657616.674
// #define LAMBDA0 2.33722
// #define LAMBDAC 0.04079234433
// #define E 0.0824832568
// #define L 1.00552653648
// #define EPSILON 0.00000000001

// Les constantes qui marche pas
#define N 0.7256077650
#define C 11754255.426
#define XS 700000.0
#define YS 12655612.050
#define LAMBDA0 3.00000000
#define LAMBDAC 47.75
#define E 0.0824832568
#define L 1.00552653648
#define EPSILON 0.00000000001
// #define phi0 47.00
// #define phi1 47.75
// #define phi2 46.25


/* Constantes de merde
#define N 0.72560777650
#define C 11754255.426
#define XS 700000.0
#define YS 12655612.050
#define LAMBDA0 2.33722
#define LAMBDAC 0.04079234433
#define E 0.08248325676
#define EPSILON 0.00000000001
 */
#endif /* traitement_donnees_h */
