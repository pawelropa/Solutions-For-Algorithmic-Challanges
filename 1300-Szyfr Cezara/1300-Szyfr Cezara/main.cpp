//
//  main.cpp
//  1300-Szyfr Cezara
//
//  Created by arafaux on 11-06-22.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    //char ch;
    int numer;
    string line;
    while (getline(cin, line)) {
        for (int i = 0; i < line.length(); i++) {
            if (isalpha(line[i])) {
                numer = static_cast<int>(line[i]);
                if (line[i] == 'Z') {
                    printf("C");
                    continue;
                }else if(line[i] == 'X') {
                    printf("A");
                    continue;
                }else if(line[i] == 'Y') {
                    printf("B");
                    continue;
                }
                else {
                    numer += 3;
                }
                cout << static_cast<char>(numer);
            }
            else {
                cout << line[i];
            }

        }
        cout << endl;

    }
    return 0;
}

