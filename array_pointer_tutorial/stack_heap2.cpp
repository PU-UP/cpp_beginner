#include <iostream>
#include <string>

using namespace std;

class stackcheck
{
    public:
        stackcheck(){cout<<"created" << endl;}
        ~stackcheck(){cout<<"deleted"<<endl;}
};

class NotsoSmartPtr
{
    private:
        stackcheck* m_ptr;
    public:
        NotsoSmartPtr(stackcheck* p)
            :m_ptr(p) {}
        ~NotsoSmartPtr(){delete m_ptr;}
};


int main()
{
    cout << "Check difference between stack and heap: " <<endl;
    {
        stackcheck c;                       // Object c get destroied when out of scope
        cout << "Stack is created: " <<endl;
        stackcheck* p = new stackcheck;     // p is stored in heap, not destroied when passing scope
    }
    cout << "Stack got destroied but heap wasn't \n" << endl;
    cout << "Check how smart pointer works: " << endl;
    {
        NotsoSmartPtr ptr = new stackcheck();   // NotSoSmartPtr ptr(new stackcheck)  // The same!  
    }
    cout << "Smart pointer destroy the pointer when it is out of scope " <<endl; 
    

}