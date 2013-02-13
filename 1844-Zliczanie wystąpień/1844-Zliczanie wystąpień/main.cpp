//
//  main.cpp
//  1844-Zliczanie wystąpień
//
//  Created by arafaux on 11-06-18.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int szukana, dlugosc, liczba, wystapienia;
    while (scanf("%d", &szukana) != EOF) {
        wystapienia = 0;
        scanf("%d", &dlugosc);
        for (int i = 0; i < dlugosc; i++) {
            scanf("%d", &liczba);
            if (liczba == szukana) {
                wystapienia++;
            }
        }
        printf("%d\n", wystapienia);
    }
    return 0;
}

