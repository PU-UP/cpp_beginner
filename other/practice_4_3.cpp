#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void _split(string &s, char dilm, vector<string> &elem)
{
    stringstream ss(s);
    string item;
    while(getline(ss,item,dilm))
    {
        elem.push_back(item);
    }
}



int main(){
    
    string name;
    cout << "name please: ";
    getline(cin,name);
    string space = " ";
    int num = name.find(space);
    cout << num << endl;
    vector<string> elems;
    _split(name,' ',elems);
    cout << elems[0] << "," << elems[1] << endl;

    cout << elems.at(1) << " at test" << endl;
    return 0;
}
