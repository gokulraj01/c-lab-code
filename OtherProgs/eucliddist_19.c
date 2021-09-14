// Author: Gokul Raj, 235, R2A, CSE

// Experiment 19 - Find the distance between two points in the Euclidean space.
#include <stdio.h>
#include <math.h>

#define ARR_LEN 256

void main(){
   int x1, x2, y1, y2;
   // inputing coordinates
   printf("Enter pos of point 1 [x1 y1]: ");
   scanf("%d %d", &x1, &y1);
   printf("Enter pos of point 2 [x2, y2]: ");
   scanf("%d %d", &x2, &y2);

   // By distance formula, d = √(Δx² + Δy²)
   float dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
   printf("Distance is: %.4g units", dist);
}