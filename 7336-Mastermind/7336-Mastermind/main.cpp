//
//  main.cpp
//  7336-Mastermind
//
//  Created by arafaux on 11-07-13.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string z[1296];
    string zgadywanka;
    
    srand((unsigned)time(NULL));
    
   
    int i2, zn, zg;
    for(int i = 0; i < 1296; i++)
    {
        z[i] = ""; i2 = i;
        for(int j = 0; j < 4; j++)
        {
            z[i] += char(49 + (i2 % 6));
            i2 /= 6;
        }
    }
    zn = 1296;
    zgadywanka = z[0];
    zg = 0;
    cout << "1 1 1 1" << endl;
    int a,b,c,d;
    while (cin >> a >> b >> c >> d) {
        if (a == 1 && b == 1 && c == 1 && d == 1) {
            break;
        }
        if (a == -1) {
            char c = zgadywanka[0];
            for (int i = 0; i < zn; i++) {
                if (!z[i].empty()) {
                    if (z[i][0] == c) {
                        z[i] = "";
                    }
                }
            }
        } else if (a == 1) {
            char c = zgadywanka[0];
            for (int i = 0; i < zn; i++) {
                if (!z[i].empty()) {
                    if (z[i][0] != c) {
                        z[i] = "";
                    }
                }
            }
        }
        
        
        if (b == -1) {
            char c = zgadywanka[1];
            for (int i = 0; i < zn; i++) {
                if (!z[i].empty()) {
                    if (z[i][1] == c) {
                        z[i] = "";
                    }
                }
            }
        }else if (b == 1) {
            char c = zgadywanka[1];
            for (int i = 0; i < zn; i++) {
                if (!z[i].empty()) {
                    if (z[i][1] != c) {
                        z[i] = "";
                    }
                }
            }
        }
        
        
        if (c == -1) {
            char c = zgadywanka[2];
            for (int i = 0; i < zn; i++) {
                if (!z[i].empty()) {
                    if (z[i][2] == c) {
                        z[i] = "";
                    }
                }
            }
        }else if (c == 1) {
            char c = zgadywanka[2];
            for (int i = 0; i < zn; i++) {
                if (!z[i].empty()) {
                    if (z[i][2] != c) {
                        z[i] = "";
                    }
                }
            }
        }
        
        
        if (d == -1) {
            char c = zgadywanka[3];
            for (int i = 0; i < zn; i++) {
                if (!z[i].empty()) {
                    if (z[i][3] == c) {
                        z[i] = "";
                    }
                }
            }
        }else if (d == 1) {
            char c = zgadywanka[3];
            for (int i = 0; i < zn; i++) {
                if (!z[i].empty()) {
                    if (z[i][3] != c) {
                        z[i] = "";
                    }
                }
            }
        }
        
        for (int i = zg + 1; i < zn; i++) {
            if (!z[i].empty()) {
                zgadywanka = z[i];
                zg = i;
                break;
            }
        }
        cout << zgadywanka[0] << " " << zgadywanka[1] << " " << zgadywanka[2] << " " << zgadywanka[3] << endl;
    }
    
    return 0;
} 