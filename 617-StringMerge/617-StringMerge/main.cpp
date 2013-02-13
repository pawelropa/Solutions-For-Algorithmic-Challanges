//
//  main.cpp
//  617-StringMerge
//
//  Created by arafaux on 11-06-19.
//  Copyright 2011 Studen. All rights reserved.
//


#include <iostream>
#include <cstring>

using namespace std;

#define T_SIZE 1001

char* string_merge(char *, char *);

int main(){
    int t,n; 
    char S1[T_SIZE], S2[T_SIZE], *S;
    
    cin >> t; /* wczytaj liczbę testów */
    cin.getline(S1,T_SIZE); 
    while(t){ 
        cin.getline(S1,T_SIZE,' ');
        cin.getline(S2,T_SIZE);      
        S=string_merge(S1,S2);
        cout << S << endl;
        delete[] S;
        t--;   
    } 
    return 0;
}

char* string_merge(char* s1, char* s2) {
    int s1Length = 0, s2Length = 0;
    int length;
    char *s;
    for (int i = 0; s1[i] != '\0'; i++) {
        s1Length += 1;
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        s2Length += 1;
    }


    s = new char[s1Length + s2Length + 1];
    for (int i = 0; i < s1Length +s2Length + 1; i++) {
        s[i] = '\0';
    }
    length = s1Length;
        
    
    for (int i = 0, lewy = 0, prawy = 0; s1[lewy] != '\0' && s2[prawy] != '\0'; i = i + 2, lewy++, prawy++) {
        s[i] = s1[lewy];
        s[i+1] = s2[prawy];
    }
    for (int i = 0; i < T_SIZE; i++) {
        s1[i] = '\0';
        s2[i] = '\0';
    }
   
    return s;
}

