//
//  main.cpp
//  3456-Szyfrowanie ROT13
//
//  Created by arafaux on 11-07-05.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    string line;
    while (getline(cin, line)) {
        for (int i = 0; i < line.length(); i++) {
            if (line[i] >= 'a' && line[i] <= 'z') {
                int number = static_cast<int>(line[i]) - static_cast<int>('a');
                number = (number + 13) % 26;
                number += static_cast<int>('a');
                line[i] = static_cast<char>(number);
            } else if (line[i] >= 'A' && line[i] <= 'Z') {
                int number = static_cast<int>(line[i]) - static_cast<int>('A');
                number = (number + 13) % 26;
                number += static_cast<int>('A');
                line[i] = static_cast<char>(number);
            } else if (line[i] >= '0' && line[i] <= '9') {
                int number = static_cast<int>(line[i]) - static_cast<int>('0');
                number = (number + 5) % 10;
                number += static_cast<int>('0');
                line[i] = static_cast<char>(number);
            }
        }
        for (int i = 0; i < line.length(); i++) {
            printf("%c", line[i]);
        }
        puts("");
    }
    return 0;
}

