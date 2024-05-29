#include <iostream>
#include <math.h>
using namespace std;
#define SIZE 9
//static const int size = 9;
int main(){
    int array[SIZE] = {};
    cout << sizeof(array)/sizeof(*array) << endl;
    cout << 0/3*3 << endl;
    cout << 1/3*3 << endl;
    cout << 2/3*3 << endl;
    cout << 3/3*3 << endl;
    cout << 4/3*3 << endl;
    cout << 5/3*3 << endl;
    cout << 6/3*3 << endl;
    cout << 7/3*3 << endl;
    cout << 8/3*3 << endl;
    
    return 0;
}
