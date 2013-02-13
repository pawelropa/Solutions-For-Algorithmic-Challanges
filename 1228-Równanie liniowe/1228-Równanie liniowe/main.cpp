//
//  main.cpp
//  1228-Równanie liniowe
//
//  Created by arafaux on 11-06-23.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>

double round( double value )
{
    return floor( value*100 + 0.5 )/100;
}

int main (int argc, const char * argv[])
{

    // insert code here...
    double a, b, c;
    std::cin >> a >> b >> c;
    if (a != 0.0) {
        //std::cout.precision();
        //std::cout << std::fixed << round((c-b)/a) << std::endl;
        printf("%.2f\n", (c-b)/a);
    } else if(a == b-c) {
        std::cout << "NWR" << std::endl;
    } else if(a == 0.0 && b-c != 0.0) {
        std::cout << "BR" << std::endl;
    }
    return 0;
}

