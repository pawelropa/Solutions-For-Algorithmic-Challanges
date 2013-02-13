//
//  main.cpp
//  2598-Kabalistyczny zapis daty
//
//  Created by arafaux on 11-06-19.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    string line;
    int sum = 0;
    
    cin >> line;
    for (int i = 0; i < line.length(); i++) {
        switch (line[i]) {
            case 'a':
                sum += 1;
                break;
            case 'b':
                sum += 2;
                break;
            case 'c':
                sum += 3;
                break;
            case 'd':
                sum += 4;
                break;
            case 'e':
                sum += 5;
                break;
            case 'f':
                sum += 6;
                break;
            case 'g':
                sum += 7;
                break;
            case 'h':
                sum += 8;
                break;
            case 'i':
                sum += 9;
                break;
            case 'k':
                sum += 10;
                break;
            case 'l':
                sum += 20;
                break;
            case 'm':
                sum += 30;
                break;
            case 'n':
                sum += 40;
                break;
            case 'o':
                sum += 50;
                break;
            case 'p':
                sum += 60;
                break;
            case 'q':
                sum += 70;
                break;
            case 'r':
                sum += 80;
                break;
            case 's':
                sum += 90;
                break;
            case 't':
                sum += 100;
                break;
            case 'v':
                sum += 200;
                break;
            case 'x':
                sum += 300;
                break;
            case 'y':
                sum += 400;
                break;
            case 'z':
                sum += 500;
                break;

                
            default:
                break;
        }
    }
    printf("%d\n", sum);
    return 0;
}

