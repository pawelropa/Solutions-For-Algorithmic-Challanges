//
//  main.cpp
//  1211-Niekolejne
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
    int n;
    scanf("%d", &n);
    if (n <= 3) {
        if (n == 0) {
            printf("0\n");
        } else if(n == 3) {
            printf("2 0 3 1\n");  
        } else {
            puts("NIE");
        }
    }else {
        int r = (n + 1) % 5;
        if (r == 0) {
            for (int i = 0; i < n-1; i = i+5) {
                printf("%d %d %d %d %d ", i+3, i, i+2, i+4, i+1);
            }
            printf("\n");
        }else if(r == 1) {
            for (int i = 0; i < n-1; i = i+5) {
                printf("%d %d %d %d %d ", i+3, i, i+2, i+4, i+1);
            }
            printf("%d\n", n);
        }else if(r == 2) {
            printf("%d ", n);
            for (int i = 0; i < n-1; i = i+5) {
                printf("%d %d %d %d %d ", i+3, i, i+2, i+4, i+1);
            }
            printf("%d\n", n-1);
        }else if(r == 3) {
            printf("%d ", n-1);
            for (int i = 0; i < n-2; i = i+5) {
                printf("%d %d %d %d %d ", i+3, i, i+2, i+4, i+1);
            }
            printf("%d %d\n",n-2, n);
        }else {
            printf("%d %d ", n-3, n-1);
            for (int i = 0; i < n-3; i = i+5) {
                printf("%d %d %d %d %d ", i+3, i, i+2, i+4, i+1);
            }
            printf("%d %d\n",n-2, n);
        }
        
    }
    
    return 0;
}

