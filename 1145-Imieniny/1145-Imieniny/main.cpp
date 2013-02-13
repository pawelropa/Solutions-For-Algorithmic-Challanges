//
//  main.cpp
//  1145-Imieniny
//
//  Created by arafaux on 11-06-28.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw, l, c;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d %d", &l, &c);
        l -= 1;
        if (l == 0) {
            puts("TAK");
            zestaw--;
            continue;
        } else if (l > c) {
            puts("TAK");
            zestaw--;
            continue;
        }
        if (c % l == 0) {
            puts("NIE");
        }else {
            puts("TAK");
        }
        zestaw--;
    }
    return 0;
}

