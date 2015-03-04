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
    
    confidence_level = 0.1;
    do{
        x = (double)rand()/RAND_MAX*(xmax-xmin)  + xmin;
        y = sin(x);
        n++; 
        sum = sum + y;
        mean = sum/n* (xmax - xmin);
        tmp  = tmp + (y-mean)*(y-mean);
        error = sqrt(tmp)/n*(xmax - xmin);
        fprintf( stderr, "%f %f \n",mean, error);
    }while( error > confidence_level);
    fprintf ( stdout, "Expected integral %f\n", mean );
    fprintf ( stdout, "Error %f\n", error);
    return 0;
}

