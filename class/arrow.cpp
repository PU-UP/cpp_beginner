#include <iostream>
#include <string>

using namespace std;

class HelloWorld
{
    public:
        void print()
        {
            cout << "Hello World " << endl;
        }
};

class SmartPtr
{
    private:
        HelloWorld* hello;
        int a;
    public:
        SmartPtr(HelloWorld* h):hello(h){}
        ~SmartPtr(){
            delete hello;
        }
        HelloWorld* operator->()                // -> overload
        {
            return hello;
        }
};


int main()
{
    SmartPtr hello = new HelloWorld();
    hello->print();
    

}