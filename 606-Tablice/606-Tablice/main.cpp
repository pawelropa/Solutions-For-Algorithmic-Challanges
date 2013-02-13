//
//  main.cpp
//  606-Tablice
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
    int zestaw;
    int tab[100] = {0};
    int liczb;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d", &liczb);
        for (int i = 0; i < liczb; i++) {
            scanf("%d", &tab[i]);
        }
        for (int i = liczb - 1; i >= 0; i--) {
            printf("%d ", tab[i]);
        }
        printf("\n");
        zestaw--;
    }
    return 0;
}

