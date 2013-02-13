//
//  main.cpp
//  9022-Bajtockie Święto Trójkąta
//
//  Created by arafaux on 11-07-12.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

long double countArea(long double a, long double b, long double c) 
{
    long double p = (a + b + c)/2.0;
    long double wynik = p*(p - a)*(p - b)*(p - c);
    return sqrt(wynik);
}

long double round(long double d)
{
    return floor(d + 0.5);
}

void insertionSort(long double arr[], int length) {
    int i, j, tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

int main (int argc, const char * argv[])
{

    // insert code here...
    int set;
    cin >> set;
    while (set) {
        int n;
        long double k;
        cin >> n >> k;
        long double a, b, c;
        long double sum = 0.0;
        while (n) {
            long double tab[3];
            cin >> a >> b >> c;
            tab[0] = a;
            tab[1] = b;
            tab[2] = c;
            insertionSort(tab, 3);
            if (tab[0] + tab[1] < tab[2]) {
                n--;
                continue;
            }
            a = a / 100.0;
            b = b / 100.0;
            c = c / 100.0;
            sum += countArea(a, b, c);
            n--;
        }
        k *= 1000.0;
        cout << static_cast<int>(round(sum*k)) << endl;
        
        set--;
    }
    return 0;
}

