//
//  main.cpp
//  3326-Warunek w tablicy
//
//  Created by arafaux on 11-06-20.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;
int main (int argc, const char * argv[])
{

    // insert code here...
    int liczb;
    long int liczba;
    long int tab[1000] = {0};
    scanf("%d\n", &liczb);
    for (int i = 0; i < liczb; i++) {
        cin >> tab[i];
    }
    char c;
    //scanf("%c %li", &c, &liczba);
    cin >> c >> liczba;
    //printf("znak: %c : %li", c, liczba);
    if (c == '>') {
        for (int i = 0; i < liczb; i++) {
            if (tab[i] > liczba) {
                printf("%li\n", tab[i]);
            }
        }
    }
    else{
        for (int i = 0; i < liczb; i++) {
            if (tab[i] < liczba) {
                printf("%li\n", tab[i]);
            }
        }
    }
    return 0;
}
