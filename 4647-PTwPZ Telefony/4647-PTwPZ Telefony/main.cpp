//
//  main.cpp
//  4647-PTwPZ Telefony
//
//  Created by arafaux on 11-07-01.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw;
    string s;
    cin >> zestaw;
    while (zestaw) {
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'C') {
                printf("2");
            }else if (s[i] >= 'D' && s[i] <= 'F') {
                printf("3");
            }else if (s[i] >= 'G' && s[i] <= 'I') {
                printf("4");
            }else if (s[i] >= 'J' && s[i] <= 'L') {
                printf("5");
            }else if (s[i] >= 'M' && s[i] <= 'O') {
                printf("6");
            }else if (s[i] >= 'P' && s[i] <= 'S') {
                printf("7");
            }else if (s[i] >= 'T' && s[i] <= 'V') {
                printf("8");
            }else if (s[i] >= 'W' && s[i] <= 'Z') {
                printf("9");
            }
        }
        printf("\n");
        zestaw--;
    }
    return 0;
}

