//
//  main.cpp
//  609-Pole pewnego koła
//
//  Created by arafaux on 11-06-23.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    double r, d;
    double pi = 3.141592654;
    cin >> r >> d;
    r *= r;
    d *= d;
    printf("%.2lf\n", (r - d/4)*pi);
    return 0;
}

