//
//  main.cpp
//  1910-Odwracanie wyrazów
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
    string word;
    while (cin >> word) {
        for (unsigned long i = word.length(); i > 0; i--) {
            printf("%c", word[i-1]);
        }
        puts("");
    }
    return 0;
}

