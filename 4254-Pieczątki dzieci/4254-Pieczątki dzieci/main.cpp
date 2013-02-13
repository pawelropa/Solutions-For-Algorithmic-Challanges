//
//  main.cpp
//  4254-Pieczątki dzieci
//
//  Created by arafaux on 11-06-18.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    unsigned long long n,k,x,r,z;
    bool coPiec = false;
    scanf("%llu %llu", &n, &k);
    ++n;
    unsigned long long h = 1;
    for (int i = 0; i < k - 1; i++) {
        h *= 10;
    }
    if (n < h) {
        n = h;
    }
    while (k) {
        z = 0;
        x = n;
        //printf("%d\n", n);
        do {
            r = x % 10;
            if (r == 5) {
                z++;
            }
            x = x / 10;
            if (z == k) {
                k = 0;
                printf("%llu\n", n);
                break;
            }
        } while (x > 0);
        if (coPiec == false && n % 10 == 5) {
            coPiec = true;
        }
        if (coPiec) {
            n += 5;
        }
        else
            n++;
    }
    return 0;
}
