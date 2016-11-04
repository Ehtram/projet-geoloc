#ifndef   _DATA_H
#define   _DATA_H

typedef struct{
	/*! Adresse d'une point d'interet à implementer*/
	char * adresse;
	/*! Timestamp d'un point */
	int time;
	/*! Longitude d'un point */
  double longitude;
  /*! Latitude d'un point */
  double latitude;
}dataPoint;

extern dataPoint* newPoint(int t,double longi, double lat);
extern void displayData(dataPoint * d);
extern double to_radians2(double degrees);
extern double distanceBtwnPoints(dataPoint * d1, dataPoint * d2);
extern void destroyPoint(dataPoint * d);

#endif
