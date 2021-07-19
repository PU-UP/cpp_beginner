#include <iostream>
#include <vector>

#define ROW 5
#define COLUMN 5
int main()
{
    // Create a 2d array
    // Method 1, heap allocation   Slow!!

    int** array2d = new int*[ROW];
    for(int i=0;i<ROW;i++)
        array2d[i] = new int[COLUMN];
    
    for (int i=0;i<ROW;i++)
        delete[] array2d[i];

    delete[] array2d;

    // Method 2, use 1d array to represent 2d
    int* array2d_2 = new int[ROW*COLUMN];
    for (int i=0;i<ROW;i++)
    {
        for (int j=0;j<COLUMN;j++)
            array2d_2[i*ROW+j] = 0;
    }
    
    delete[] array2d_2;

}