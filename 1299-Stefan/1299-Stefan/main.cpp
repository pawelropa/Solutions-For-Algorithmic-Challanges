//
//  main.cpp
//  1299-Stefan
//
//  Created by arafaux on 11-06-22.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

long long int kadane(long long int tab[], int n)
{
    long long int maximum = 0;
    long long int j = 0;
    for (int i = 0; i < n; i++) {
        j = (j + tab[i] > 0) ? j + tab[i] : 0;
        maximum = (j > maximum) ? j : maximum;
    }
    if (maximum <= 0) {
        return 0;
    }else {
        return maximum;
    }
}

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw;
    cin >> zestaw;
    long long int tab[100000] = {0};
    for (int i = 0; i < zestaw; i++) {
        cin >> tab[i];
    }
    long long int wynik = kadane(tab, zestaw);
    printf("%lld\n", wynik);
    /*
    int k = 0, l = 0;
    long long int s = -10;
    long long int t = 0;
    int j = 0;
    for (int i = 0; i < zestaw; i++) {
        t = t + tab[i];
        if (t > s) {
            k = j;
            l = i;
            s = t;
        }
        if (t < 0) {
            t = 0;
            j = i + 1;
        }
        
    }
    if (s < 0) {
        cout << "0" << endl;
    }
    else
        cout << s << endl;
    return 0;
    */
}

