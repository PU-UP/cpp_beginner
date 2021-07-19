#include <iostream>
#include <array>

using namespace std;

int main()
{
    static const int arrSize = 10;
    int arr[arrSize];                                   // cannot have a method to access its size
    int size = sizeof(arr) / sizeof(int);          // A method could do the job but not always correct
    cout << size << endl;
    arr[0] = 10;
    arr[1] = 9;
    cout << "PRINT arr WITHOUT [] is the MEMORY LOCATION DISPLAY: " << arr << endl;


    array<int,5> new_arr;                          // std::array could access to its size
    cout << new_arr.size() << endl;

    // array is pointer
    int *p1 = arr;
    cout <<"Second value in arr: "<< *(p1+1)<< " Accessed with pointer" << endl;

}