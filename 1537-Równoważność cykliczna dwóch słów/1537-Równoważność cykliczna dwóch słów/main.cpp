//
//  main.cpp
//  1537-Równoważność cykliczna dwóch słów
//
//  Created by arafaux on 11-06-21.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <deque>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw;
    string s1,s2;
    deque<char> s1Deque, s2Deque;
    bool cycle = false;
    deque<char>::iterator s1Iter, s2Iter;
    
    scanf("%d\n", &zestaw);
    while (zestaw) {
        cin >> s1;
        cin >> s2;
        cycle = false;
        if (s1.length() != s2.length()) {
            puts("NIE");
            continue;
        }
        for (int i = 0; i < s1.length(); i++) {
            s1Deque.push_back(s1[i]);
            s2Deque.push_back(s2[i]);
        }
        for (int i = 0; i < s1.length(); i++) {
            char front = s1Deque.front();
            s1Deque.pop_front();
            s1Deque.push_back(front);
            int k = 0;
            for (s1Iter = s1Deque.begin(), s2Iter = s2Deque.begin(); s1Iter != s1Deque.end() && s2Iter != s2Deque.end(); s1Iter++, s2Iter++) {
                if (*s1Iter != *s2Iter) {
                    break;
                }
                k++;
            }
            //printf("%d %lu\n", k , s1Deque.size());
            if (k == s1Deque.size()) {
                cycle = true;
                break;
            }

        }
        s2Deque.clear();
        s1Deque.clear();
        if (cycle) {
            puts("TAK");
        }
        else {
            puts("NIE");
        }
        zestaw--;
    }
    return 0;
}

