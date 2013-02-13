//
//  main.cpp
//  4797-Skracanie identyfikatorów
//
//  Created by arafaux on 11-07-07.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isSamoglaska(char c) 
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c =='Y' || c == 'u' || c == 'U') {
        return true;
    } else {
        return false;
    }
}

int main (int argc, const char * argv[])
{

    // insert code here...
    string s;
    int dlugosc;
    cin >> dlugosc;
    cin >> s;
    if (s.length() <= dlugosc) {
        cout << s << endl;
        return 0;
    }
    
    for (long long int i = static_cast<long long int>(s.length() - 1); i >= 0; i--) {
        if (!isalnum(s[i]) && s[i] != '$') {
            s.erase(i, 1);
        }
        if (s.length() <= dlugosc) {
            cout << s << endl;
            return 0;
        }
    }
    for (long long int i = static_cast<long long int>(s.length() - 1); i >= 0; i--) {
        if (isdigit(s[i])) {
            s.erase(i, 1);
        }
        if (s.length() <= dlugosc) {
            cout << s << endl;
            return 0;
        }
    }
    
    long long int k = 0;
    for (long long int i = 0; i < static_cast<long long int>(s.length()); i++) {
        
        if (isSamoglaska(s[i])) {
            break;
        }
        k++;
    }
    long long int help = s.length();
    for (long long int i = k+1; i < s.length(); i++) {
        if (isSamoglaska(s[i])) {
            s[i] = ' ';
            help--;
        }
        
        if (help <= dlugosc) {

            for (int j = 0; j < s.length(); j++) {
                if (s[j] != ' ') {
                    printf("%c", s[j]);
                }
                
            }
            puts("");
            return 0;
        }
    }
    string bak = "";
    for (long long int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            bak.append(1, s[i]);
        }
    }
    s = bak;
    
    for (long long int i = static_cast<long long int>(s.length() - 2); i >= 0; i--) {
        s.erase(i, 1);
        if (s.length() <= dlugosc) {
            cout << s << endl;
            return 0;
        }
    }
    return 0;
}

