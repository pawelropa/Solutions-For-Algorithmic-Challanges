//
//  main.cpp
//  3328-Histogram z liczb
//
//  Created by arafaux on 11-07-10.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    map<int, int> hmap;
    int numbers[] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    for (int i = 0; i < 21; i++) {
        hmap[numbers[i]] = 0;
    }
    int number = 0;
    int max = 0;
    while (cin >> number) {
        hmap[number] = hmap[number] + 1;
    }
    for(map<int, int>::iterator it = hmap.begin(); it != hmap.end(); it++){
        if (it->second > max) {
            max = it->second;
            
        }
        //cout << it->first << ":" << it->second << endl;
    }
    
    for (map<int, int>::iterator it = hmap.begin(); it != hmap.end() ; it++) {
        printf("%4d:|", it->first);
        int ile = static_cast<int>((30.0*it->second/static_cast<float>(max))+0.5);
        for (int i = 0; i < 30; i++) {
            if (i < ile) {
                cout << "*";
            } else {
                cout << " ";
            }
            
        }
        cout << "|"<< endl;
    }
    return 0;
}

