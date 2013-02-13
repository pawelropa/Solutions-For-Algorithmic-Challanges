//
//  main.cpp
//  977-Tablica
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
    int tab[100] = {0};
    int i = 0,x;
    while (cin >> x) {
        tab[i] = x;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", tab[j]);
    }
    
    return 0;
}
