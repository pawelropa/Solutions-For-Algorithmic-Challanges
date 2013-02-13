//
//  main.cpp
//  4840-Szyfr Gronsfelda
//
//  Created by arafaux on 11-07-05.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    string line, command, key;
    ostringstream ss;
    
    
    cin >> command;
    long long int intKey;
    cin >> intKey;
    ss << intKey;
    key = ss.str();
    
    if (getchar() == '\n') {
        int x;
    }
    while (getline(cin, line)) {
        if (intKey == 0) {
            cout << line << endl;
            continue;
        }

        if (command[0] == 'S') {
            unsigned long j = 0;
            for (int i = 0; i < line.length(); i++) {
                if (line[i] >= 'A' && line[i] <= 'Z') {
                    int number = static_cast<int>(line[i]) - static_cast<int>('A');
                    int add = static_cast<int>(key[j]) - static_cast<int>('0');
                    number = (number + add) % 26;
                    number += static_cast<int>('A');
                    line[i] = static_cast<char>(number);
                    j = (j+1);
                    j = j % (key.length());
                }
                
            }
            for (int i = 0; i < line.length(); i++) {
                printf("%c", line[i]);
            }
            puts("");
        } else {
            unsigned long j = 0;
            for (int i = 0; i < line.length(); i++ ) {
                if (line[i] >= 'A' && line[i] <= 'Z') {
                    int number = static_cast<int>(line[i]) - static_cast<int>('A');
                    int add = static_cast<int>(key[j]) - static_cast<int>('0');
                    for (int k = 0; k < 25; k++) {
                        number = (number + add) % 26;
                    }
                    
                    

                    number += static_cast<int>('A');
                    line[i] = static_cast<char>(number);
                    j = (j+1);
                    j = j % (key.length());
                }
            }
            for (int i = 0; i < line.length(); i++) {
                printf("%c", line[i]);
            }
            puts("");
        }
    }

    return 0;
}

