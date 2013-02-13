//
//  main.cpp
//  1941-Porównywanie dużych liczb
//
//  Created by arafaux on 11-06-29.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    string s;
    while (getline(cin, s)) {
        int i = 0;
        int pierwszaTab[1000] = {0};
        int drugaTab[1000] = {0};
        
        for (; i < s.length(); i++) {
            if (s[i] == ' ') {
                i++;
                break;
            }
            pierwszaTab[i] = static_cast<int>(s[i]);
        }
        i++;
        if (s[i] == '=' && s[i+1] == '=') {
            <#statements#>
        }
        int j = 0;
        for (; i < s.length(); i++, j++) {
            drugaTab[j] = static_cast<int>(s[i]);
        }
        
    }
    return 0;
}

