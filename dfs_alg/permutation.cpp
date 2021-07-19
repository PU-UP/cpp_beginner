#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[] = {1,2,3,4};
    while(next_permutation(a,a+4))
    {
        cout << a[0] << a[1] << a[2] << a[3]<<endl;
    }
}