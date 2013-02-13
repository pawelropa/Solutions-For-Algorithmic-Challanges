//
//  main.cpp
//  978-Stos
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
    int tab[10] = {0};
    int wsk = 0, liczba;
    char znak;
    while (scanf("%c\n", &znak) != EOF) {
        if (znak == '+') {
            scanf("%d\n", &liczba);
            if (wsk >= 0 && wsk <= 9) {
                tab[wsk] = liczba;
                ++wsk;
                puts(":)");
            }else {
                puts(":(");
            }
             
        } else {
            if (wsk >= 1 && wsk <= 10) {
                --wsk;
                printf("%d\n", tab[wsk]);
            } else {
                puts(":(");
            }
            
        }
    }
    return 0;
}

