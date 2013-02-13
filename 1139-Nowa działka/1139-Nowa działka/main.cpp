//
//  main.cpp
//  1139-Nowa działka
//
//  Created by arafaux on 11-06-17.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw = 0;
    int rozmiar = 0;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d", &rozmiar);
        printf("%d\n", rozmiar*rozmiar);
        zestaw--;
    }
    return 0;
}

