//
//  main.cpp
//  438-Liczby Pierwsze
//
//  Created by arafaux on 11-06-17.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#include <iostream>

using namespace std;

const int n = 100;


int main()
{   /*
    int k = 0;
    int beginingNumber = 10000;
    while (k < 10000) {
        k = 0;
        bool *numbersTable = new bool[beginingNumber];
        for (int i = 0; i < beginingNumber; i++) {
            numbersTable[i] = false;
        }
        for (int i = 2; i*i < beginingNumber; i++ ){
            if (numbersTable[i] == true) 
                continue;
            for (int j = 2 * i ; j < beginingNumber; j += i)
                numbersTable[j] = true;  
        }
        
        
        for (int i = 2; i < beginingNumber; i++)
            if (numbersTable[i] == false) 
                k++;
        printf("%d %d\n", k, beginingNumber);
        delete [] numbersTable;
        beginingNumber += 10000;
    }

    
    return 0;
     
     */
    
    int k = 0;
    int beginingNumber = 12000;
    bool *numbersTable = new bool[beginingNumber];
    for (int i = 0; i < beginingNumber; i++) {
        numbersTable[i] = false;
    }
    for (int i = 2; i*i < beginingNumber; i++ ){
        if (numbersTable[i] == true) 
            continue;
        for (int j = 2 * i ; j < beginingNumber; j += i)
            numbersTable[j] = true;  
    }
    scanf("%d", &k);
    int primary;
    while (k) {
        scanf("%d", &primary);
        if (primary == 1) {
            printf("NIE\n");
        }
        else if (numbersTable[primary] == false) 
            printf("TAK\n");
        else
            printf("NIE\n");
        k--;
    }
    //delete [] numbersTable;
    
    return 0;
    
}


