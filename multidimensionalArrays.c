// Multidimensional Arrays
// In the previous tutorials on Arrays, we covered, well, arrays and how they work. The arrays we looked at were all one-dimensional, 
// but C can create and use multi-dimensional arrays. Here is the general form of a multidimensional array declaration:

type name[size1][size2]...[sizeN];
// For example, here's a basic one for you to look at -
int foo[1][2][3];
// or maybe this one -
char vowels[1][5] = {
    {'a', 'e', 'i', 'o', 'u'}
};

// Two-dimensional Arrays
// The simplest form of multidimensional array is the two-dimensional array. A two-dimensional array is pretty much a list of one-dimensional arrays. 
// To declare a two-dimensional integer array of size [ x ][ y ], you would write something like this −
type arrayName [x][y];

#include <stdio.h>

int main() {
    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;
    
    int nums2[3] = {40, 50, 60};
    printf("print 50: %d, ", nums2[1]);
    
    char vowels[1][5] = {
        {'a', 'e', 'i', 'o', 'u'}
    };
    
    printf("print 'a': %c, ", vowels[0][0]);

    int zoo[1][2][3] = {
        {{1,2,3},{4,5,6}}
    };
    printf("print 5: %d, ", zoo[0][1][1]);
    
    int xoBoard[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("print 3: %d, ", xoBoard[0][2]);
    xoBoard[2][0] = 100; // update value from 7 to 100
    printf("print 100: %d, ", xoBoard[2][0]);
    return 0;
}
