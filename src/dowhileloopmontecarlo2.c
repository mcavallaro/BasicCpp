#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//this is pure C code

#define PI 3.141592

int main () {
    double xmin = 0;
    double xmax = PI;
    double x,y;
    double error;
    double mean;
    double confidence_level;

    double n=0, sum = 0, tmp=0;
    int k;
    confidence_level = 0.01;
    do{
        x = (double)rand()/(double)RAND_MAX*(xmax-xmin)  + xmin;
        y = (double)rand()/(double)RAND_MAX;
        if (y < sin(x)){
            k++;
        }
        n++;
        mean = (double)k/n* (xmax - xmin);
        tmp = tmp  + (1-mean)*(1-mean);
        error = sqrt(tmp)/n*(xmax - xmin);
//        fprintf( stderr, "%f %f \n",mean, error);
    }while( error > confidence_level);
    fprintf ( stdout, "Expected integral %f\n", mean );
    fprintf ( stdout, "Error %f\n", error);
    return 0;
}

