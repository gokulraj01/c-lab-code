#include <stdio.h>

int fact(int n){
    int op = 1;
    for(int i=2; i<=n; i++)
        op = op * i;
    return op;
}

int combination(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

void binomial(int n){
    int r = 0;
    while(n>=r){
        if(n-r == 0)
            printf("%d b^%d", combination(n,r), r);
        else if(r == 0)
            printf("%d a^%d", combination(n,r), n-r);
        else
            printf("%d a^%d b^%d", combination(n,r), n-r, r);
            
        if(n>r)
            printf(" + ");
        r++;
    }
}

void main(){
    int n;
    printf("Enter value of \'n\': ");
    scanf("%d", &n);
    binomial(n);
}