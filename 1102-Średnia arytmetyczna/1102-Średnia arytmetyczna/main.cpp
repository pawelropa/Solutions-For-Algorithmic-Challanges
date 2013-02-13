//
//  main.cpp
//  1102-Średnia arytmetyczna
//
//  Created by arafaux on 11-06-20.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cctype>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw, liczb, sum, pozycja;
    float srednia = 0.0, min, help;
    int tab[100] = {0};
    scanf("%d\n", &zestaw);
    while (zestaw) {
        sum = 0;
        srednia = 0.0;
        min = 10000000.0;
        scanf("%d", &liczb);
        for (int i = 0; i < liczb; i++) {
            scanf("%d", &tab[i]);
            sum += tab[i];
        }
        srednia = static_cast<float>(sum) / static_cast<float>(liczb);
        for (int i = 0; i < liczb; i++) {
            help = abs(tab[i] - srednia);
            if (help < min) {
                min = help;
                pozycja = i;
            }
        }
        printf("%d\n", tab[pozycja]);
        zestaw--;
    }
    return 0;
}

