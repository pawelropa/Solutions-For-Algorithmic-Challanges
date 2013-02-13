//
//  main.cpp
//  626-Obżartuchy
//
//  Created by arafaux on 11-06-19.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw, obzartuchy, ciastekPudelku, sekundy, ciastek, sum = 0, wynik;
    sekundy = 60*60*24;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d %d", &obzartuchy, &ciastekPudelku);
        sum = 0;
        while (obzartuchy) {
            scanf("%d", &ciastek);
            sum += sekundy / ciastek;
            obzartuchy--;
        }
        if (sum % ciastekPudelku != 0) {
            sum = sum + (ciastekPudelku - sum % ciastekPudelku);
            wynik = sum / ciastekPudelku;
        }else {
            wynik = sum / ciastekPudelku;   
        }
        printf("%d\n", wynik);
        zestaw--;
    }
    return 0;
}

