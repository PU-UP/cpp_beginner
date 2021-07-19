// Const is like a promise that something will not change
# include <iostream>
# include <string>


class ConstTutorial
{
    private:
        int m_x=10,m_y=20;
        mutable int mutValue;                       // This value could be changed inside const method
    public:
        
        int getValue() const                        // This means the method cannot modify member values
        {
            mutValue = 30;                          // Mutable value is not affected    !!!!
            std::cout << m_x << std::endl;
            return m_x;
        }
};

void printValue (const ConstTutorial& c)            // Value of c is promised not be changed
                                                    // getValue() const guarantees 
                                                    // that the function will not change any value
{
    std::cout<<c.getValue()<<std::endl;         
}

int main()
{
    // Usage 1...
    const int MAX = 2;
    //  MAX = 3;                        // NOT ALLOWED since it is const

    // Normal pointer
    int* ptr = new int;
    *ptr = 10;                          // Change value
    ptr = (int*)&MAX;                   // Change location 

    // Usage 2...
    // const pointer
    const int* ptr2 = new int;          // contents of ptr2 cannot be changed
    // *ptr2 = 10;                      // Wrong!!
    int const* ptr3 = new int;          // Same as the previous one, location of the * and const matters only
                                        // const before *!!!!!, content stay the same(*p = 10 not allowed)
                                        // Can only do (p = &a)
    ptr3 = (int*)&MAX;                  // WORKING!

    int * const ptr4 = new int;         // cannot point to something else
                                        // const after * !!!!!!
                                        // Value could be changed (*p = 10 allowed)
    *ptr4 = 10;

    const int* const ptr5 = new int;

    // Usage 3 in class
    ConstTutorial c;
    printValue(c);
    
    
}