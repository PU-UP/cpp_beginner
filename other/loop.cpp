#include <iostream>
#include <string>

using namespace std;
int main()
{
    string word = "stressed";
    char temp;
    int i,j;
    for (j=0,i=word.size()-1;j<i;--i,++j)
    {
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;
    }
    cout << word << endl;

}