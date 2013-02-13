//
//  main.cpp
//  997-Kalkulator
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
    int x,y,wynik;
    char c;
    int tab[10] = {0};
    while (cin >> c >> x >> y) {
        switch (c) {
            case '+':
                wynik = tab[x] + tab[y];
                printf("%d\n", wynik);
                break;
            case '-':
                wynik = tab[x] - tab[y];
                printf("%d\n", wynik);
                break;
            case '*':
                wynik = tab[x] * tab[y];
                printf("%d\n", wynik);
                break;
            case '/':
                wynik = tab[x] / tab[y];
                printf("%d\n", wynik);
                break;
            case '%':
                wynik = tab[x] % tab[y];
                printf("%d\n", wynik);
                break;
            case 'z':
                tab[x] = y;
                break;
            default:
                break;
        }
    }
    return 0;
}

