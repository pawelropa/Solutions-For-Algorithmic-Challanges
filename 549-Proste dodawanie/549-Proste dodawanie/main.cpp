//
//  main.cpp
//  549-Proste dodawanie
//
//  Created by arafaux on 11-06-17.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw, liczb, dane, suma;
    scanf("%d\n", &zestaw);
    
    while (zestaw) {
        suma = 0;
        scanf("%d", &liczb);
        for (int i = 0; i < liczb; i++) {
            scanf("%d", &dane);
            suma = suma + dane;
        }
        printf("%d\n", suma);
        zestaw--;
    }
    return 0;
}
