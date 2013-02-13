//
//  main.cpp
//  968-Suma
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
    int x;
    int sum = 0;
    while (cin >> x) {
        sum = sum + x;
        printf("%d\n", sum);
    }
    return 0;
}

