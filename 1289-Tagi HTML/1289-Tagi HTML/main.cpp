//
//  main.cpp
//  1289-Tagi HTML
//
//  Created by arafaux on 11-06-19.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    string line;
    bool zamieniaj = false;
    //char znak;
    //char tab[1001] = {'\0'};
    char ch;
    while ( (ch = cin.get() ) != EOF ) {
        
            if (ch == '<') {
                zamieniaj = true;
            }
            if (ch == '>' && zamieniaj) {
                zamieniaj = false;
            }

            if (zamieniaj && isalpha(ch) ) {
                printf("%c", toupper(ch));
            }
            else
                printf("%c", ch);
        
        
    }
    return 0;
}

