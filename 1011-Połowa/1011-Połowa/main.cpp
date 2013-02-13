//
//  main.cpp
//  1011-Połowa
//
//  Created by arafaux on 11-06-18.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw;
    string word;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        cin >> word;
        for (int i = 0; i < word.length()/2; i++) {
            printf("%c", word[i]);
        }
        puts("");
        
        zestaw--;
    }
    return 0;
}

