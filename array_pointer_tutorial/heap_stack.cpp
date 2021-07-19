# include <iostream>

using namespace std;

class heapORstack
{
    private:
        int m_h;
        int m_s;
    public:
        heapORstack():m_h(10),m_s(29){}
        heapORstack(const int &h, const int &s):m_h(h),m_s(s){}

        int getHeap()
        {
            return m_h;
        }
};

int main()
{
    // Stack (Faster way to create an object)
    // It would be destoried ...
    // Size of stack might be small (Use heap when the size of class is huge)
    {
        heapORstack stack = heapORstack(2,8);
        heapORstack stack2(5,9);
    }
    //Heap (Manually free the memory)
    // It would not be destoried until delete it
    heapORstack* heap = new heapORstack(19,29);                 // new --- delete
    delete heap;



    // Show difference 
    
    heapORstack* test1;
    heapORstack* test2;

    int a = 2;
    if(a > 0){
        heapORstack obj_s(8,19);
        heapORstack* obj_h = new heapORstack(10,29);
        cout << obj_s.getHeap() << endl;
        test1 = &obj_s;
        test2 = obj_h;
    }
    // (test1 should be null after if{}, but werid...)
    cout << test2->getHeap() << endl;
    cout <<"stack " << test1->getHeap() << endl;
    cout <<"stack " << test1->getHeap() << endl;

    delete test2;
}