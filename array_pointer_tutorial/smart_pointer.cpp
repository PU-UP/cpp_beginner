// Unique_ptr first
// Shared_ptr second

#include <iostream>
#include <string>
#include <memory>       // For smart ptr

using namespace std;

class Check
{
    public:
        Check(){cout << "Object is created " << endl;}
        ~Check(){cout << "Object is destroied "<< endl;}
        void print(){cout << "Object is alive" << endl; }
};

// Unique pointer can not be copied
// unique_ptr<ClassName> obj = make_unique<ClassName>();
// unique_ptr<ClassName> obj2 = obj  --------WRONG !!!! CAN NOT BE COPY
// Use shard_ptr instead when copying

int main()
{
    cout << "-----Unique pointer----- " <<endl;
    // Unique pointer example
    {
        unique_ptr<Check> che = make_unique<Check>();
        che->print();
    }

    // Shared pointer example
    cout << "-----Shared pointer----- " <<endl;
    {
        shared_ptr<Check> cp_che;
        {
            shared_ptr<Check> che2 = make_shared<Check>();
            cp_che = che2;
        }
        cp_che->print();
        cout << "If any copy exists, it will not be destroied "<<endl;
    }
    cout << "-----Weak pointer----- " <<endl;
    // Weak pointer example
    {
        weak_ptr<Check> wk_che;
        {
            shared_ptr<Check> che3 = make_shared<Check>();
            wk_che = che3;
        }
        cout <<"Weak pointer will be destroied inside scope " << endl;
    }
}

