//
//  main.cpp
//  1909-Sumy wielokrotne
//
//  Created by arafaux on 11-06-23.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    long long int smallSum = 0, bigSum = 0, number;
    while (cin >> number) {
        if (number == 0) {
            cout << smallSum << endl;
            bigSum += smallSum;
            smallSum = 0;
            
        }else {
            smallSum += number;
        }
    }
    cout << bigSum << endl;
    return 0;
}

