//
//  main.cpp
//  4843
//
//  Created by arafaux on 11-07-05.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int hourStart, minutStart;
    scanf("%d:%d\n", &hourStart, &minutStart);
    int przerwy[10000] = {0};
    int i = 0;
    while (cin >> przerwy[i]) {
        i++;
    }
    if (i == 0) {
        printf("%02d:%02d,", hourStart, minutStart);
        if (minutStart + 45 >= 60) {
            hourStart++;
            hourStart = hourStart % 24;
            minutStart += 45;
            minutStart = minutStart % 60;
        } else {
            minutStart += 45;
        }
        printf("%02d:%02d\n", hourStart, minutStart);
        return 0;
    }
    for (int j = 0; j < i; j++) {
        printf("%02d:%02d,", hourStart, minutStart);
        
        if (minutStart + 45 >= 60) {
            hourStart++;
            hourStart = hourStart % 24;
            minutStart += 45;
            minutStart = minutStart % 60;
        } else {
            minutStart += 45;
        }
        printf("%02d:%02d,", hourStart, minutStart);
        
        int add = przerwy[j] / 60;
        hourStart += add;
        hourStart = hourStart % 24;
        przerwy[j] = przerwy[j] % 60;
        if (przerwy[j] + minutStart >= 60) {
            hourStart++;
            hourStart = hourStart % 24;
            minutStart = minutStart + przerwy[j];
            minutStart = minutStart % 60;
        } else {
            minutStart += przerwy[j];
        }
        
    }
    printf("%02d:%02d,", hourStart, minutStart);
    if (minutStart + 45 >= 60) {
        hourStart++;
        hourStart = hourStart % 24;
        minutStart += 45;
        minutStart = minutStart % 60;
    } else {
        minutStart += 45;
    }
    printf("%02d:%02d\n", hourStart, minutStart);

    return 0;
}

