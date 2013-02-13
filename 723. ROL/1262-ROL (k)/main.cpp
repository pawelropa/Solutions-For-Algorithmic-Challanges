//
//  main.cpp
//  1262-ROL (k)
//
//  Created by arafaux on 11-06-17.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <deque>
#include <cstdio>

using namespace std;


int main (int argc, const char * argv[])
{

    //mozna to zrobic na tablicy w ogole nie uzywajac kolejek 
    //wystarczy wczytac liczby do tablicy nastepnie wypisac poczawszy od indeksu 1..., a na koncu element o indeksie 0
    
    // insert code here...
    deque<int> q;
    int wartosc, rol, liczba, rozmiar;
    scanf("%d\n", &wartosc);
    while (wartosc) {
        scanf("%d", &rozmiar);
        
        for (int i = 0; i < rozmiar; i++) {
            scanf("%d", &liczba);
            q.push_back(liczba);
        }
        int l = q.front();
        q.push_back(l);
        q.pop_front();

        //wypisanie kolejki
        deque<int>::iterator i = q.begin();
        for (; i != q.end(); i++) {
            printf("%d ", *i);
        }
        q.clear();
        wartosc--;
    }
    
    for (int i = 0; i < rol; i++) {

        
    }
    printf("\n");
    return 0;
}

