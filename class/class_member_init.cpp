# include <iostream>

using namespace std;

class ID
{
    private:
        string m_name;
        int id;
    public:
        ID()
        :m_name("Unknown"),id(0)              // class member initializer (Better way, avoid declare variables twice)       
        {}
        string getName()
        {
            return m_name;
        }

};

int main()
{
    ID one;
    cout << one.getName() << endl;
}