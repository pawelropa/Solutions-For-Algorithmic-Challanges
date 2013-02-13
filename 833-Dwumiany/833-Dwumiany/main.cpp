//
//  main.cpp
//  833-Dwumiany
//
//  Created by arafaux on 11-06-29.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{

    // insert code here...
    int zestaw;
    unsigned long long int n, k;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        cin >> n >> k;
        /*if (n == 1000 && k == 1000) {
            puts("-1");
            continue;
        }*/
        unsigned long long int roznica = n - k;
        unsigned long long int iloczyn = 1;
        unsigned long long int mianownik = 1;
        unsigned long long int wynik = 0;
        unsigned long long int tabGora[100] = {0};
        unsigned long long int tabDol[100] = {0};
        
        if (k > roznica) {
            roznica = k;
            k = n - k;
        }
        int licznikGora = 0;
        for (long long int i = roznica + 1; i <= n; i++) {
            tabGora[licznikGora] = i;
            licznikGora++;
        }
        int licznikDol = 0;
        for (long long int i = 2; i <= k; i++) {
            tabDol[licznikDol] = i;
            licznikDol++;
        }
        for (unsigned long long i = 0; i < licznikDol; i++) {
            for (unsigned long long j = 0; j < licznikGora; j++) {
                if (tabGora[j] % tabDol[i] == 0) {
                    tabGora[j] = tabGora[j] / tabDol[i];
                    tabDol[i] = 1;
                    break;
                }
            }
        }

        for (unsigned long long int i = 0; i < licznikDol; i++) {
            if (tabDol[i] > 1) {
                while (tabDol[i] % 2 == 0) {
                    for (unsigned long long j = 0; j < licznikGora; j++) {
                        if (tabGora[j] % 2 == 0) {
                            tabGora[j] /= 2;
                            tabDol[i] /= 2;
                            break;
                        }
                    }
                }
                while (tabDol[i] % 3 == 0) {
                    for (unsigned long long j = 0; j < licznikGora; j++) {
                        if (tabGora[j] % 3 == 0) {
                            tabGora[j] /= 3;
                            tabDol[i] /= 3;
                            break;
                        }
                    }
                }
                while (tabDol[i] % 5 == 0) {
                    for (unsigned long long j = 0; j < licznikGora; j++) {
                        if (tabGora[j] % 5 == 0) {
                            tabGora[j] /= 5;
                            tabDol[i] /= 5;
                            break;
                        }
                    }
                }
                while (tabDol[i] % 7 == 0) {
                    for (unsigned long long j = 0; j < licznikGora; j++) {
                        if (tabGora[j] % 7 == 0) {
                            tabGora[j] /= 7;
                            tabDol[i] /= 7;
                            break;
                        }
                    }
                }
            }
        }
        for (unsigned long long int i = 0; i < licznikGora; i++) {
            iloczyn *= tabGora[i];
        }
        for (unsigned long long int i = 0; i < licznikDol; i++) {
            mianownik *= tabDol[i];
        }
        wynik = iloczyn / mianownik;
        /*if (wynik > 1000000000) {
            puts("-1");
        }else {
            
        }*/
        printf("%llu\n", wynik);
        zestaw--;
    }
    return 0;
}

