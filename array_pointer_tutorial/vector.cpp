// Dynamic array

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Vertex
{
    int x,y,z;
    Vertex(int x, int y, int z)
        :x(x),y(y),z(z) {}
};

ostream& operator<<(ostream& os, const Vertex& v)
{
    os << v.x << ", "<<v.y<<", "<< v.z;
    return os;
}

int main()
{
    vector<Vertex> vertices;                        // Vector initialize vector<Type> v;
    vertices.push_back({1,2,3});                    // Vector push_back (add values)
    vertices.push_back({2,3,4});
    vertices.push_back({3,4,5});
    vertices.push_back({4,5,6});


    for (const Vertex& v: vertices)                 // Access all elememts in vector
    {
        cout << v << endl;
    }
    cout << "\n\n\n";
    vertices.erase(vertices.begin()+2);             // Erase one element with iterator

    for (const Vertex& v: vertices)
    {
        cout << v << endl;
    }

    vertices.clear();                               // Clear vector
}