//
//  main.cpp
//  1016-Predkość średnia
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
    int a, b, zestaw;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d %d", &a, &b);
        printf("%d\n", 2*a*b/(a+b));
        zestaw--;
    }
    return 0;
}

