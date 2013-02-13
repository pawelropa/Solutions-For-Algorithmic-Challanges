//
//  main.cpp
//  4138-Harry and big doughnuts
//
//  Created by arafaux on 11-06-23.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw, c, k, w;
    cin >> zestaw;
    while (zestaw) {
        cin >> c >> k >> w;
        if (c*w <= k) {
            puts("yes");
        }else {
            puts("no");
        }
        zestaw--;
    }
    return 0;
}

