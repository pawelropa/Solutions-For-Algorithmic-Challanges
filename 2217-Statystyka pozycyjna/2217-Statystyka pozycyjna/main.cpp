//
//  main.cpp
//  2217-Statystyka pozycyjna
//
//  Created by arafaux on 11-07-01.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <set>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    long long int x, number;
    while (true) {
        cin >> x;
        if(cin.eof())break;
        set<long long int> s;
        while (cin.peek()!='\n') {
            cin >> number;
            s.insert(number);
        }
        set<long long int>::iterator it;
        long long int i = 0;
        if (s.size() < x) {
            puts("-");
            continue;
        }
        for (it = s.end(); it != s.begin(); it--, i++) {
            if (i+1 == x) {
                it--;
                cout << *(it) << endl;
                break;
            }
        }
        
    }
    return 0;
}

