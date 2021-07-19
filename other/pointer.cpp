#include <iostream>

int main()
{
    using namespace std;
    // Location &
    int apple = 5;
    cout << "Location apple: " << &apple << endl;
    
    // pointer
    int * p1 = new int;
    // Store a value in new location
    *p1 = apple;
    cout << "Location1 p1: " << p1 << endl;
    // Use the variable with its location (no new space assigned)
    p1 = &apple;
    cout << "Location2 p1: " << p1 << endl;
    // new to allocate memory
    int * p2 = new int;
    *p2 = 10;
    // point array
    int * parr = new int [3];
    parr[0] = 1;        // just like an array
    parr[1] = 3;
    parr[2] = 5;
    cout << "origin: [0]: " << parr[0]<< " [1]: " << parr[1]<< " [2]: " << parr[2] << endl;
    parr = parr + 1;
    cout << "Updated: [0]: " << parr[0]<< " [1]: " << parr[1]<< " [2]: " << parr[2] << endl;
    parr = parr - 1;
    cout << "Updated: [0]: " << parr[0]<< " [1]: " << parr[1]<< " [2]: " << parr[2] << endl;

    // delete
    delete [] parr;
    delete p2;

    // pointer-array
    int num[3] = {1,5,7};
    int *p4 = num;
    int *p5 = &num[0];

    
    return 0;
}   