//
//  main.cpp
//  2181-Wycinanie literek
//
//  Created by arafaux on 11-06-19.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    string line,ch;
    while (cin >> ch >> line) {
        for (int i = 0; i < line.length(); i++) {
            if (line[i] != ch[0]) {
                printf("%c", line[i]);
            }
        }
        puts("");
    }
    return 0;
}

