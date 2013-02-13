//
//  main.cpp
//  2045-Pola Prostokątów
//
//  Created by arafaux on 11-07-06.
//  Copyright 2011 Studen. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <climits>

using namespace std;

class Rectangle {
    public:
    Rectangle() {
        x1 = 0; 
    }
    
    ~Rectangle() {
        x1 = 0;
    }
    Rectangle(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
        width = x2 - x1;
        height = y2 - y1;
    }
    
    Rectangle* intersection(Rectangle &r) {
        int tx1 = x1;
        int ty1 = y1;
        int rx1 = r.x1;
        int ry1 = r.y1;
        int tx2 = tx1; tx2 += width;
        int ty2 = ty1; ty2 += height;
        int rx2 = rx1; rx2 += r.width;
        int ry2 = ry1; ry2 += r.height;
        if (tx1 < rx1) tx1 = rx1;
        if (ty1 < ry1) ty1 = ry1;
        if (tx2 > rx2) tx2 = rx2;
        if (ty2 > ry2) ty2 = ry2;
        tx2 -= tx1;
        ty2 -= ty1;
        // tx2,ty2 will never overflow (they will never be
        // larger than the smallest of the two source w,h)
        // they might underflow, though...
        if (tx2 < INT_MIN) tx2 = INT_MIN;
        if (ty2 < INT_MIN) ty2 = INT_MIN;
        return new Rectangle(tx1, ty1, tx2, ty2);
    }
    
    bool intersect(Rectangle &r) {
        int tw = width;
        int th = height;
        int rw = r.width;
        int rh = r.height;
        if (rw <= 0 || rh <= 0 || tw <= 0 || th <= 0) {
            return false;
        }
        int tx = x1;
        int ty = y1;
        int rx = r.x1;
        int ry = r.y1;
        rw += rx;
        rh += ry;
        tw += tx;
        th += ty;
        
        return ((rw < rx || rw > tx) && (rh < ry || rh > ty) && (tw < tx || tw > rx) && (th < ty || th > ry));
    }
    int x1, y1, x2, y2, width, height;
};

int main (int argc, const char * argv[])
{

    // insert code here...
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Rectangle *r1 = new Rectangle(a, b, c, d);
    cin >> a >> b >> c >> d;
    Rectangle *r2 = new Rectangle(a, b, c, d);
    Rectangle *r3;
    if (r1->intersect(*r2)) {
        r3 = r1->intersection(*r2);
        cout << r1->width * r1->height + r2->width * r2->height - (r3->x2 * r3->y2) << endl;
    } else {
        cout << r1->width * r1->height + r2->width * r2->height << endl;
    }
    
    
    return 0;
}

