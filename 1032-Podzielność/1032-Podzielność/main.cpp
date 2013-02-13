//
//  main.cpp
//  1032-Podzielność
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
    int n, x, y;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d %d %d", &n, &x, &y);
        for (int i = 0; i < n; i++) {
            if (i % x == 0 && i % y != 0) {
                printf("%d ", i);
            }
        }
        puts("");
        zestaw--;
    }
    return 0;
}

