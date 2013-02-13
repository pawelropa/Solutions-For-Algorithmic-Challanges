//
//  main.cpp
//  4799-Zast«powanie tr—jznak—w
//
//  Created by arafaux on 11-06-20.
//  Copyright 2011 Studen. All rights reserved.
//

#include "stdio.h"
#include "stdlib.h"


int potegowanieModulo(int a, int b, int m)
{
    int i;
    int result = 1;
    long int x = a%m;
    
    for (i=1; i<=b; i<<=1) {
        x %= m;
        if ((b&i) != 0) {
            result *= x;
            result %= m;
        }
        x *= x;
    }
    
    return result;
}



int main(void)
{
    int zestaw;
    int x, n, p;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d %d %d", &x, &n, &p);
        printf("%d\n", potegowanieModulo(x, n, p));
        zestaw--;
    }
    
    return 0;
}