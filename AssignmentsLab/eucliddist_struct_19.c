// Author: Gokul Raj, 235, R2A, CSE

// Experiment 19 - Find the distance between two points in the Euclidean space. (using struct)
#include <stdio.h>
#include <math.h>

#define ARR_LEN 256

// declare point struct to input points
struct point{
    int x, y;
};

void main(){
    struct point a, b;
    printf("Enter pos of point 1 [x1 y1]: ");
    scanf("%d %d", &a.x, &a.y);
    printf("Enter pos of point 2 [x2 y2]: ");
    scanf("%d %d", &b.x, &b.y);

   // By distance formula, d = √(Δx² + Δy²)
    float dist = sqrt(pow((b.x-a.x), 2) + pow((b.y-a.y), 2));
    printf("Distance: %.4f", dist);
}