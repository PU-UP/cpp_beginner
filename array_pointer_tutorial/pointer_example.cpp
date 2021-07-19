#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char* buffer = new char[10];
    memset(buffer,0,10);
    char** ptr = &buffer;       //pointer ptr points to buffer's(another pointer) location

    delete[] buffer;
}