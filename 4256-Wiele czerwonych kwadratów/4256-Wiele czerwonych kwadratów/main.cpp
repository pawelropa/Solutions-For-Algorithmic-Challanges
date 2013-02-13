//
//  main.cpp
//  4256-Wiele czerwonych kwadratów
//
//  Created by arafaux on 11-07-14.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, const char * argv[])
{
    
    //insert code here...
    unsigned long long x1, x2, y1, y2;
    unsigned long long czerwone = 0;
    while(cin >> x1 >> y1 >> x2 >> y2) {
    
        czerwone = 0;
        for (long long y = y1; y < y2; y++) {
            //cout << czerwone << endl;
            long long x = x1;
            if (y % 2 == 0) {
                if (x < y) {
                    x = y + 1;
                    if (x2 % 2 == 0 && x2 > x) {
                        --x;
                        czerwone += (x2 - x)/2;
                    } else { 
                        if (x2 > x) {
                            czerwone += (x2 - x)/2;
                        }
                    }
                } else {
                    if (x % 2 == 0 ) {
                        x++;
                    }
                    if (x2 % 2 == 0 && x2 > x) {
                        --x;
                        czerwone += (x2 - x)/2;
                    } else { 
                        if (x2 > x) {
                            czerwone += (x2 - x)/2;
                        }
                    }
                }
            } else {
                if (x < y) {
                    czerwone += y - x;
                    x = y;
                    if (x2 % 2 == 0 && x2 > x) {
                        --x;
                        czerwone += (x2 - x)/2;
                    } else { 
                        if (x2 > x) {
                            czerwone += (x2 - x)/2;
                        }
                    }
                } else {
                    if (x % 2 == 0 ) {
                        x++;
                    }
                    if (x2 % 2 == 0 && x2 > x) {
                        --x;
                        czerwone += (x2 - x)/2;
                    } else { 
                        if (x2 > x) {
                            czerwone += (x2 - x)/2;
                        }
                    }
                }
            }

            
        }
            
            cout << czerwone << endl;
    }

    
    
    return 0;
}

