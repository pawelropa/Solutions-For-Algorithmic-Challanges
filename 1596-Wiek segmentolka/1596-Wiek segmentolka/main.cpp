//
//  main.cpp
//  1596-Wiek segmentolka
//
//  Created by arafaux on 11-06-23.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw, segmenty, wiek;
    int tab[10000] = {0};
    
    cin >> zestaw;
    while (zestaw) {
        cin >> segmenty;
        wiek = 0;
        for (int i = 0; i < segmenty; i++) {
            cin >> tab[i];
        }
        for (int i = 0; i < segmenty; i++) {
            wiek += tab[i];
        }
        cout << wiek + segmenty - 1 << endl;
        zestaw--;
    }
    return 0;
}

