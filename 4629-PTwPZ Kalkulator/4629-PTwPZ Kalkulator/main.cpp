//
//  main.cpp
//  4629-PTwPZ Kalkulator
//
//  Created by arafaux on 11-07-01.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <stdlib.h>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        int i = 0;
        int input = 0;
        int sum = 0;
        cin >> sum;
        char c;
        while (true) {
            bool wyjdz = false;
            cin >> c;
            if(cin.peek()=='\n')break;
            switch (c) {
                case '+':
                    cin >> input;
                    sum += input;
                    if(cin.peek()=='\n') wyjdz = true;
                    break;
                case '-':
                    cin >> input;
                    sum -= input;
                    if(cin.peek()=='\n')wyjdz = true;
                    break;
                        
                default:
                    break;
            }
            
            if (wyjdz) {
                break;
            }
            
        }
        cout << sum << endl;
        zestaw--;
    }
    return 0;
}

