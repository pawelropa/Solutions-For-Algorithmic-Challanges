//
//  main.cpp
//  6702-Rodzaje trójkątów
//
//  Created by arafaux on 11-07-01.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int x, y, z;
    while (cin >> x >> y >> z) {
        int tab[] = {x, y, z};
        sort(tab, tab+3);
        if (tab[0] + tab[1] <= tab[2]) {
            puts("brak");
        }else if(tab[0] * tab[0] + tab[1] * tab[1] == tab[2] * tab[2] ) {
            puts("prostokatny");
        }else if(tab[0] * tab[0] + tab[1] * tab[1] > tab[2] * tab[2] ) {
            puts("ostrokatny");
        } else {
            puts("rozwartokatny");
        }
        
    }
    return 0;
}

