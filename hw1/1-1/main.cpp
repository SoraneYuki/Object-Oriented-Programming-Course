#include <iostream>

using namespace std;

#include "swap.h"

int main() {

    int x = 3, y = 5;

    swap(x, y);

    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

    return 0;

}