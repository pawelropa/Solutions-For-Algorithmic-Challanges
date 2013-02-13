//
//  main.cpp
//  1978-Zliczanie linii
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
    char znak;
    int liczbaWystapien = 0;
    while ( (znak = cin.get() ) != EOF ) {
        if (znak == '\n') {
            liczbaWystapien++;
        }
    }
    printf("%d\n", liczbaWystapien+1);
    return 0;
}

