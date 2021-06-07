#include <stdio.h>
#include <math.h>

int prime(int n){
    if(!n)
        return 0;
    int r = ceil(sqrt(n));
    for(int i=2; i<=r; i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}

void main(){
    int limit;
    printf("Input limit: ");
    scanf("%d", &limit);
    for(int i=0; i<limit; i++){
        if(prime(i))
            printf("%d ", i);
    }
    printf("\nDONE\n");
}
