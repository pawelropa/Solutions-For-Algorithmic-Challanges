//
//  main.cpp
//  1055-Parzyste nieparzyste
//
//  Created by arafaux on 11-06-17.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (void)
{
    int zestaw = 0;
    int dlugoscCiagu = 0;
    
    scanf("%d\n", &zestaw);
    while (zestaw) {
        
        scanf("%d", &dlugoscCiagu);
        int *tab = new int[dlugoscCiagu];
        for (int i = 0; i < dlugoscCiagu; i++) {
            scanf("%d", &tab[i]);
        }
        for (int i = 0; i < dlugoscCiagu; i++) {
            if (i % 2 != 0) {
                printf("%d ", tab[i]);
            }
        }
        for (int i = 0; i < dlugoscCiagu; i++) {
            if (i % 2 == 0) {
                printf("%d ", tab[i]);
            }
        }
        printf("\n");
        zestaw--;
    }
    return 0;
}

