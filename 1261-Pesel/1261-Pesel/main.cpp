//
//  main.cpp
//  1261-Pesel
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
    int zestaw, sum;
    string pesel;
    int tabPesel[11];
    scanf("%d\n", &zestaw);
    while (zestaw) {
        cin >> pesel;
        for (int i = 0; i < pesel.length(); i++) {
            tabPesel[i] = pesel[i];
        }
        sum = tabPesel[0]*1 + tabPesel[1]*3 + tabPesel[2]*7 + tabPesel[3]*9 + tabPesel[4]*1 +tabPesel[5]*3 + tabPesel[6]*7 + tabPesel[7]*9 + tabPesel[8]*1 + tabPesel[9]*3 + tabPesel[10]*1;
        if (sum > 0) {
            if (sum % 10 == 0) {
                puts("D");
            }
            else
                puts("N");
        }else
            puts("N");
        zestaw--;
    }
    return 0;
}

