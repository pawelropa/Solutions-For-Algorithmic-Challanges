//
//  main.cpp
//  601-NWD
//
//  Created by arafaux on 11-06-17.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int nwd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
        
    }
    return a;
}

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw, a, b;
    scanf("%d", &zestaw);
    while (zestaw) {
        scanf("%d %d", &a, &b);
        printf("%d\n", nwd(a, b)); 
        zestaw--;
    }
    return 0;
}

