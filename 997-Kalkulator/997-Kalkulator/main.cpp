//
//  main.cpp
//  997-Kalkulator
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
    int x,y;
    char c;
    while (cin >> c >> x >> y) {
        switch (c) {
            case '+':
                printf("%d\n", x + y);
                break;
            case '-':
                printf("%d\n", x - y);
                break;
            case '*':
                printf("%d\n", x * y);
                break;
            case '/':
                printf("%d\n", x / y);
                break;
            case '%':
                printf("%d\n", x % y);
                break;
                
            default:
                break;
        }
    }
    return 0;
}

