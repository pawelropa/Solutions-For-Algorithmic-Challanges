#include <iostream>
#include <cstdio>
using namespace std;

int countXn(int di) {
    if (di == 1) {
        return 0;
    }
    if (di == 2) {
        return 1;
    }
    int n;
    for (n = 0; di != 1; n++) {

        if (n == 1) {
		        continue;
            }

        if ((di % 2) != 0) {
            di = (3 * di) + 1;
            continue;
        }
        else {
            di = di/2;
        }
		}
    return n-1;

}

int main(int argc, char** argv) {
	
    int zestaw = 0;
    int liczba = 0;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d", &liczba);
        printf("%d\n", countXn(liczba));
        zestaw--;
    }
	  return 0;
}

