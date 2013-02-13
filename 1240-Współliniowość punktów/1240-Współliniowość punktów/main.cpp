//
//  main.cpp
//  1240-Współliniowość punktów
//
//  Created by arafaux on 11-06-17.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int wspolLiniowosc(int x1, int x2, int y1, int y2, int z1, int z2) {
    return x1 * y2 + y1 *z2 + z1 * x2 - z1 * y2 - y1 * x2 - x1 * z2; 
}

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw = 0;
    int x1, x2, y1, y2, z1, z2;
    scanf("%d\n", &zestaw);
    
    while (zestaw) {
        
        scanf("%d %d %d %d %d %d", &x1, &x2, &y1, &y2, &z1, &z2);
        if (wspolLiniowosc(x1, x2, y1, y2, z1, z2) == 0) {
            printf("TAK\n");    
        }
        else {
            printf("NIE\n");
        }
        zestaw--;
    }
    return 0;
}

