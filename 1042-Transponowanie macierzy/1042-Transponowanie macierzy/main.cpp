//
//  main.cpp
//  1042-Transponowanie macierzy
//
//  Created by arafaux on 11-06-23.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int tab[200][200] = {0};
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> tab[i][j];
        }
    }
    for (int j = 0; j < b; j++) {
        for (int i = 0; i < a; i++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

