//
//  main.cpp
//  675-SkarbFinder
//
//  Created by arafaux on 11-07-01.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw;
    int ruch, a, b;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d\n", &ruch);
        int x = 0, y = 0;
        while (ruch) {
            scanf("%d %d", &a, &b);
            switch (a) {
                case 0:
                    y += b;
                    break;
                case 1:
                    y -= b;
                    break;
                case 2:
                    x -= b;
                    break;
                case 3:
                    x += b;
                default:
                    break;
            }
            ruch--;
        }
        if (x == 0 && y == 0) {
            puts("Studnia");
            zestaw--;
            continue;
        }
        if (x == 0) {
            if (y > 0) {
                printf("%d %d\n", 0, y);
            }else {
                printf("%d %d\n", 1, -y);
            } 
            zestaw--;
            continue;
        }
        if (y == 0) {
            if (x > 0) {
                printf("%d %d\n", 3, x);
            }else {
                printf("%d %d\n", 2, -x);
            } 
            zestaw--;
            continue;
        }
        if (y > 0) {
            printf("%d %d\n", 0, y);
        }else {
            printf("%d %d\n", 1, -y);
        } 
        if (x > 0) {
            printf("%d %d\n", 3, x);
        }else {
            printf("%d %d\n", 2, -x);
        } 
        zestaw--;
    }
    return 0;
}

