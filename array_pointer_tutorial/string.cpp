#include <iostream>
#include <cstring>

#include <stdlib.h>

using namespace std;

void stringFunc(const string& s)            // Always pass reference string 
{
    cout << s << endl;
}

int main(){
    const char* name = "zhengnan";          //"" - char pointer 
    char name2[2] = {'P','U'};              //'' - char
    cout << name2 << endl;

    //String (const char pointer)
    string name3 ="Z.PU";
    name3.append(" hello");
    stringFunc(name3);
    cout << strlen(name) << endl;

    string s1 = R"(This
is 
    a
        way
            to 
    store a paragraph)";
    cout << s1 << endl;
}