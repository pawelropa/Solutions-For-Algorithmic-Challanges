//
//  main.cpp
//  6441-Prostokąty
//
//  Created by arafaux on 11-07-10.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw;
    long double Ax, Ay, Bx, By, Ad, Bd;
    cin >> zestaw;
    while (zestaw) {
        cin >> Ax >> Ay >> Bx >> By;
        if (Ay > Ax) {
            long double tmp;
            tmp = Ax;
            Ax = Ay;
            Ay = tmp;
        }
        if (By > Bx) {
            long double tmp;
            tmp = Bx;
            Bx = By;
            By = tmp;
        }
        if (Ax > Bx && Ay > By) {
            puts("TAK");
            zestaw--;
            continue;
        }
        if (Ax <= Bx && Ay <= By) {
            puts("NIE");
            zestaw--;
            continue;
        }
        Ad = sqrt(Ax*Ax + Ay*Ay);
        Bd = sqrt(Bx*Bx + By*By);
        if (Bd >= Ad) {
            puts("NIE");
            zestaw--;
            continue;
        }
        if (Bd < Ad) {
            long double b = Ay / 2.0;
            Bd = Bd / 2.0;
            long double x = sqrt(Bd*Bd - b*b);
            long double m = (Ax / 2.0) - x;
            long double k = Ax / 2.0;
            long double c = sqrt(Bd*Bd - k*k);
            long double n = b - c;
            long double wektor = sqrt(m*m + n*n);
            if (wektor > By) {
                puts("TAK");
                zestaw--;
                continue;
            } else {
                puts("NIE");
            }
        }
        zestaw--;
    }
    return 0;
}

